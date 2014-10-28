//Esercizio 2.3bis
#include <stdio.h>
#include <ctype.h>
#define LUNG 20

int max;
char from[LUNG], temp[LUNG], to[LUNG];

void stampa(int n) {
	int x;
	for(x = 0; x < n; x++) {
		if (from[x] != '0')
			printf("%c", from[x]);
	}
	printf(" , ");
	for(x = 0; x < n; x++) {
		if (temp[x] != '0')
			printf("%c", temp[x]);
	}
	printf(" , ");
	for(x = 0; x < n; x++) {
		if (to[x] != '0')
			printf("%c", to[x]);
	}
	printf("\n");
}

void hanoi (int n, char from[], char temp[], char to[]) {
	int max = n, x = 0, y = 0;
	if (n == 1) {
		for (x = 0; isupper(from[x]); x++);
		for (y = 0; isupper(to[y]); y++);
		to[y] = from[x-1];
		from[x-1] = '0';
		stampa(LUNG);
	}
	else {
		hanoi(n - 1, from, to, temp);
		hanoi(1, from, temp, to);
		hanoi(n - 1, temp, from, to);
	}
}

int main () {
	int n, ch, i;
	printf("Inserisci un intero:\n");
	scanf("%d", &n);
	ch = n + 64;
	for (i = 0; i < n; i++) {
		from[i] = ch;
		temp[i] = to[i] = '0';
		ch--;
	}
	stampa(LUNG);
	hanoi(n, from, temp, to);
	return 0;
}
