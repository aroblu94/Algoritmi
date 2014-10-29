// Esercizio 1.5
#include <stdio.h>

int lung_stringa (char *s);

int main () {
	int i = 0;
	char word[50], c;
	do {
		scanf("%c", &(word[i]));
	}
	while (word[i++] != '\n');
	word[i] = '\0';
	printf("Lunghezza stringa: %d\n", lung_stringa(word));
	return 0;
}

int lung_stringa (char *s) {
	int count = 0;
	do {
		s++;
		count++;
	}
	while (*s != '\0');
	return --count;
}
