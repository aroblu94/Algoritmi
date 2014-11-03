// Esercizio 1.1
#include <stdio.h>
#include <stdlib.h>

// Prototipi
int smallest_word_index( char *s[], int n );

// Main
int main () {
	char *dict [] = {" ciao ", " mondo ", " cme ", " funziona ", " bene ", " questo ", " programma "};
	int lun = 7, pos;
	pos =  smallest_word_index ( dict , lun );
	printf ("La parola minima si trova in posizione %d\n", pos);
	return 0;
}

// Funzioni
int smallest_word_index( char *s[], int n) {
	int small = 0, currLung, prevLung = 0, count;
	char *currStr;
	for(count = 0; count < n; count++) {
		currLung = 0;
		currStr = s[count];
		while(*currStr != '\0') {
			currLung++;
			currStr++;
		}
		if(currLung <= prevLung || prevLung == 0) {
			prevLung = currLung;
			small = count;
		}
	}
	return small;
}
