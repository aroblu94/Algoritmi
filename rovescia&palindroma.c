//Esercizio 1.3
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

char* rovescia (char word[]) {
	char *drow = (char*)calloc(strlen(word), sizeof(char));
	char  *p = word + strlen(word) - 1;
	for (; p != word - 1;) {
		*drow = *p;
		drow++;
		p--;
	}
	drow = drow - strlen(word) + 1;
	return drow;
}

void palindroma (char word[]) {
	bool pal = false;
	char *p = word, *q = word + strlen(word) - 2;
	for(; p < q;) {
		if (*p == *q) {
			pal = true;
		}
		p++;
		q--;
	}
	if(pal)
		printf("Palindroma\n");
}

int main () {
	int i = 0;
	char word[50], c;
	do {
		scanf("%c", &(word[i]));
	}
	while (word[i++] != '\n');
	word[i] = '\0';
	char *drow = rovescia(word);
	printf("%s\n", drow);
	palindroma(word);
	return 0;
}
