// Esercizio 3.1 bis
#include <stdio.h>
#include <stdlib.h>

void my_realloc(void* p, int size);

int main () {
	int size;
	void* p = malloc(1000);
	scanf("%d", &size);
	my_realloc(p, size);
	return 0;
}

void my_realloc(void* p, int size) {
	void *p2 = realloc(p, size);
	if(p2 == NULL) {
		printf("ERRORE: Riallocazione non riuscita\n");
		exit(EXIT_FAILURE);
	}
	else
		printf("Indirizzo Riallocazione: %p\n", p2);
}
