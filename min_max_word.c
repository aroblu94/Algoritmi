// Esercizio 1.2
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Prototipi
void smallest_largest( char *s[], int n, char **smallest, char **largest );

// Main
int main () {
	char *dict [] = {" ciao ", " mondo ", " come ", " funziona ", " bene ", " questo ", " programma "};
	int lun = 7;
	char **smallest, **largest;
	smallest = largest = dict;
	smallest_largest(dict, lun, smallest, largest);
	return 0;
}

// Funzioni
void smallest_largest( char *s[], int n, char **smallest, char **largest ) {
	int i, small = 0, large = 0;
	for(i = 0; i < n; i++) {
		if(strcmp(s[i], s[small]) < 0) {
			large = small;
			small = i;
		}
		else
			large = i;
	}
	printf("Parola più piccola in posizione %d, parola più grande in posizione %d\n", small, large);
}
