// Esercizio 3.1
#include <stdio.h>
#include <stdlib.h>

void my_malloc(int size);

int main () {
	int size;
	scanf("%d", &size);
	my_malloc(size);
	return 0;
}

void my_malloc(int size) {
	void* p = malloc(size);
	if(p == NULL) {
		printf("ERRORE: Allocazione non riuscita\n");
		exit(EXIT_FAILURE);
	}
	else
		printf("Indirizzo allocazione: %p\n", p);
}
