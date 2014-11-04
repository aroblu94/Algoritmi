// Esercizio 1.1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Prototipi
int smallest_word_index( char *s[], int n );

// Main
int main () {
	char *dict [] = {" ciao ", " mondo ", " come ", " funziona ", " bene ", " questo ", " programma "};
	int lun = 7, pos;
	pos =  smallest_word_index ( dict , lun );
	printf ("La parola minima si trova in posizione %d\n", pos);
	return 0;
}

// Funzioni
int smallest_word_index( char *s[], int n) {
	int small = 0, i;
	for(i = 0; i < n; i++) {
		if (strcmp(s[i], s[small]) < 0)
			small = i;
	}
	return small;
}
