// Esercizio 2.1
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv) {
	char *word;
	word = argv[1];
	while(*word != '\0') {
		if (*word == 'a' || *word == 'e' || *word == 'i' || *word == 'o' || *word == 'u')
			printf("%cf%c", *word, *word);
		else
			printf("%c", *word);
		word++;
	}
	printf("\n");
	return 0;
}
