//Esercizio 1.4
#include <stdio.h>

char change(char c1, char c2);

int main () {
	char c1, c2;
	printf("Inserisci un carattere, spazio e una stringa terminata da un punto:\n");
	scanf("%c", &c1);
	scanf(" %c", &c2);
	while (c2 != '.') {
		printf("%c", change(c1, c2));
		scanf("%c", &c2);
	}
	printf("\n");
	return 0;
}

char change(char c1, char c2) {
	if (c2 == 'a' || c2 == 'e' || c2 == 'i' || c2 == 'o' || c2 == 'u')
		return c1;
	else
		return c2;
}
