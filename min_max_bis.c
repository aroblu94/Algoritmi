// Esercizio 2.2
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Funzioni
void smallest_largest(char *s[], int n, char *smallest, char *largest ) {
	int i, small = 1, large = 1;
	for(i = 1; i < n; i++) {
		if(strcmp(s[i], s[small]) < 0) {
			large = small;
			small = i;
		}
		else
			large = i;
	}
	printf("Parola più piccola in posizione %d, parola più grande in posizione %d\n", small, large);
}

// Main
int main (int argc, char **argv) {
	int lun = argc - 1;
	char *smallest, *largest;
	smallest = largest = argv[1];
	smallest_largest(argv, lun, smallest, largest);
	return 0;
}
