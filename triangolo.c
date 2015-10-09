//Esercizio disegno triangolo
#include <stdio.h>

int main() {
	int n,x,y;
	printf("n = ");
	scanf("%d", &n);
	for(y=0; y<n; y++) {
		for(x=0; x<n; x++) {
			if(x==y)
				printf("|");
			else if(x<y)
				printf("o");
			else
				printf("+");
		}
		printf("\n");
	}
	return 0;
}