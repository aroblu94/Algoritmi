// Esercizio 3.2 b
#include <stdio.h>
#include <stdlib.h>

int main () {
	int *p = malloc(2), n, count = 1, a = 2;
	scanf("%d", &n);
	p[0] = n;
	while(n != 0) {
		scanf("%d", &n);
		p[count] = n;
		if(count++ == a) {
			a = a * 2;
			p = realloc(p, a);
		}
	}
	count--;
	for(a = count-1; a >= 0; a--) {
		printf("%d ", p[a]);
	}
	printf("\n");
	return 0;
}