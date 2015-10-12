#include <stdio.h>

int main() {
	char c;
	int countp=0;
	printf("Inserisci stringa (terminata da un punto): ");
	// leggo i caratteri
	while((c=getchar())!='.') {
		if(c=='(')
			countp++;
		else if(c==')')
			countp--;
		if(countp<0)
			break;
	}

	if(countp<0)
		printf("Troppe parentesi chiuse.\n");
	else if(countp>0)
		printf("Mancano parentesi chiuse.\n");
	else
		printf("L'espressione è ben parentesizzata.\n");

	return 0;
}