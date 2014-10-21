// Esercizio 2.2
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main () {
	char parola1[100], parola2[100], c1, c2;
	int l1, l2, alfabeto, lettera1, lettera2, i;
	l1 = l2 = 0;
	while(true) {
		scanf("%c", &c1);
		if (c1 != '\n') {
			l1++;
			parola1[l1-1] = toupper(c1);
		}
		else
			break;
	}

	while(true) {
		scanf("%c", &c2);
		if (c2 != '\n') {
			l2++;
			parola2[l2-1] = toupper(c2);
		}
		else
			break;
	}

	if (l1 != l2)
		printf("Le due parole NON sono anagrammi\n");
	else {
		for (alfabeto = 65; alfabeto  <= 90; alfabeto++) {
			lettera1 = lettera2 = 0;
			for(i = 0; i < l1; i++) {
				if (parola1[i] == alfabeto)
					lettera1++;
			}
			for(i = 0; i < l2; i++) {
				if (parola2[i] == alfabeto)
					lettera2++;
			}
			if (lettera1 != lettera2) {
				printf("Le due parole NON sono anagrammi\n");
				break;
			}
			if (alfabeto == 90) {
				printf("Le due parole SONO anagrammi\n");
			}
		}
	}
	return 0;
}
