// Esercizio 1.9
#include <stdio.h>
#include <math.h>

int main () {
	int count, x, i;
    printf("Lista dei primi 10 quadrati perfetti: \n");
	for (count = 0, x = 1; count < 10; x++) {
		for (i = 0; i < x; i++) {
			if ((int)pow((double)i, 2) == x) {
				count++;
				printf("%d\n", x);
				break;
			}
		}
	}
	return 0;
}
