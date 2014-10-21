//Esercizio 2.1
#include <stdio.h>
#include <ctype.h>

int main () {
    char stringa[100];
    int j, i, alfabeto, lettera;
    i = lettera = 0;
    printf("Inserisci una stringa terminata da un punto:\n");
    do {    //Carico la stringa letta in un array di caratteri
        scanf(" %c", &stringa[i]);
		stringa[i] = toupper(stringa[i]);
        i++;
    }
	while (stringa[i-1] != '.');

	i--;
	j = i;

	for (alfabeto = 65; alfabeto <= 90; alfabeto++) {
		lettera = 0;
		i = j;
		for (; i > 0; i--) {
			if(stringa[i] == alfabeto)
				lettera++;
		}
		if(lettera == 0)
			continue;
		else {
			printf("%c ", alfabeto);
			for(; lettera > 0; lettera--) {
				printf("*");
			}
			printf("\n");
		}
	}

    return 0;
}
