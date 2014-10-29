// Esercizio 1.4
#include <stdio.h>
#include <ctype.h>
#include <string.h>

char *maiuscolo (char *stringa) {
	int len = strlen(stringa);
	do {
		*stringa = toupper(*stringa);
		stringa++;
	}
	while (*stringa != '\0');
	stringa = stringa - len;
	return stringa;
}

int main () {
	int i = 0;
	char word[50];
	do {
		scanf("%c", &(word[i]));
	}
	while (word[i++] != '\n');
	word[i] = '\0';
	printf("%s", maiuscolo(word));
	return 0;
}
