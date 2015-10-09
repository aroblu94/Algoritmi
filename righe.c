//Esercizio disegno righe alternate
#include <stdio.h>

int main() {
	int n,x,y;
	printf("n = ");
	scanf("%d", &n);
	for(y=0; y<n; y++) {
		for(x=0; x<n; x++) {
			if(y%2==0) {
				printf("+");
			} 
			else printf("o");
		}
		printf("\n");
	}
	return 0;
}