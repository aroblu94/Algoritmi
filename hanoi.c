//Esercizio 2.3
#include <stdio.h>

int cont = 0;

int hanoi (int n, int from, int temp, int to) {
	if (n == 1) {
		printf("%d --> %d\n", from, to);
		cont++;
	}
	else {
		hanoi(n - 1, from, to, temp);
		printf("%d --> %d\n", from, to);
		cont++;
		hanoi(n - 1, temp, from, to);
	}
	return cont;
}

int main () {
	int n, a = 0, b = 1, c = 2;
	printf("Inserisci un intero:\n");
	scanf("%d", &n);
	printf("Numero mosse: %d\n", hanoi(n, a, b, c));
	return 0;
}
