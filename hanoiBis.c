//Esercizio 2.3bis
#include <stdio.h>
#include <ctype.h>
#define LUNG 20

int max;
char from[LUNG], temp[LUNG], to[LUNG];

void stampa(int n/*, char from[], char temp[], char to[]*/) {
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
		printf("x: %d, y; %d\n", x, y);
		to[y] = from[x-1];
		from[x-1] = '0';
		/*do {
			x++;
		}
		while (isupper(from[x]));
		do {
			y++;
		}
		while (isupper(to[y]));
		if(y > 1)
			y++;
		printf("Popped %c\n", from[x-1]);
		to[y-1] = from[x-1];
		printf("Pushed in to[%d]\n", y-1);
		from[x-1] = '0';*/
		stampa(max);
	}
	else {
		hanoi(n - 1, from, to, temp);
		hanoi(n - 1, from, temp, to);
		hanoi(n - 1, temp, from, to);
		//stampa(max, temp, from, to);
	}
	//stampa(max/*, from, temp, to*/);
}

int main () {
	//char from[LUNG], temp[LUNG], to[LUNG];
	int n, ch, i;
	printf("Inserisci un intero:\n");
	scanf("%d", &n);
	ch = n + 64;
	// Inizializzo il gioco con i dischi ('A' è il più piccolo, '0' = nessun disco)
	for (i = 0; i < n; i++) {
		from[i] = ch;
		temp[i] = to[i] = '0';
		ch--;
	}
	stampa(n/*, from, temp, to*/);
	hanoi(n, from, temp, to);
	return 0;
}
