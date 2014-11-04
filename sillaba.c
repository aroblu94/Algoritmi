// Esercizio 2.3
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sillaba(char *word, int lun) {
	int i;
	printf("%c", word[0]);
	for(i = 1; i < lun; i++) {
		if(word[i-1] < word[i])
			printf("%c", word[i]);
		else
			printf("-%c", word[i]);
	}
	printf("\n");
}

int main (int argc, char **argv) {
	char *word;
	word = argv[1];
	sillaba(word, strlen(word));
	return 0;
}
