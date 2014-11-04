// Esercizio 2.1
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv) {
	char *word;
	word = argv[1];
	while(*word != '\0') {
		inf(*word == 'a' || *word == 'e' || *word == 'i' || *word == 'o' || *word == 'u')
			printf("%cf%c", *word, *word);
		/*if(*word == 'a')
			printf("afa");
		else if(*word == 'e')
			printf("efe");
		else if(*word == 'i')
			printf("ifi");
		else if(*word == 'o')
			printf("ofo");
		else if(*word == 'u')
			printf("ufu");*/
		else
			printf("%c", *word);
		word++;
	}
	printf("\n");
	return 0;
}
