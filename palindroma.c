// Esercizio 2.3
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void palindroma(char *word, int lun);

int main (int argc, char **argv) {
	char *word = argv[1];
	palindroma(word, strlen(word));
	return 0;
}

void palindroma(char *word, int lun) {
	int count = 0, j = lun - 1;
	while(count++ != lun) {
		if(word[count-1] != word[j])
			break;
		j--;
	}
	if (count - 1 == lun)
		printf("Palindroma\n");
	else
		printf("Non palindroma\n");
}
