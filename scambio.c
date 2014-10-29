// Esercizio 1.2
#include <stdio.h>

void scambio (int *p, int *q) {
	int temp = *p;
	*p = *q;
	*q = temp;
}

int main () {
	int a, b;
	printf("Inserisci due valori: ");
	scanf("%d%d", &a, &b);
	printf("a = %d b = %d\n", a, b);
	scambio (&a, &b);
	printf("a = %d b = %d\n", a, b);
	return 0;
}
