// Esercizio 1.1
#include <stdio.h>

float potenza(int b, int e) {
	float b1;
	int a;
	if (e == 0)
		b1 = 1;
	else if (e > 0) {
		b1 = b;
		for (a = 1; a < e; a++) {
			b1 = b1 * b;
		}
	}
	else {
		b1 = b;
		e = -e;
		for (a = 1; a < e; a++) {
			b1 = b1 * b;
		}
		b1 = 1/b1;
	}
	return b1;
}

int main () {
	int b, e;
	scanf("%d%d", &b, &e);
	printf("%f\n", potenza(b, e));
	return 0;
}
