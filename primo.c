// Esercizio 1.2
#include <stdio.h>
#include <stdbool.h>

bool primo(int a) {
	bool primo = false;
	int b = 2;
	int resto;
	while(true) {
		if(a == b) {
			primo = true;
			break;
		}
		else {
			resto = a%b;
			if (resto == 0) {
				primo = false;
				break;
			}
			else
				b++;
		}
	}
	return primo;
}

int main () {
	int a;
	scanf("%d", &a);
	if (a > 1) {
		if(primo(a) == true)
			printf("Il numero inserito è primo.\n");
		else
			printf("Il numero inserito NON è primo.\n");
	}
	return 0;
}
