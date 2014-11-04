// Esercizio 3.2 a
#include <stdio.h>
#include <stdlib.h>


int main () {
	int dim, i;
	scanf("%d", &dim);
	int *point = malloc(dim);
	for(i = 0; i < dim; i++) {
		scanf("%d", &point[i]);
	}
	for (i = dim - 1; i >= 0; i--) {
		printf("%d ", point[i]);
	}
	printf("\n");
	return 0;
}