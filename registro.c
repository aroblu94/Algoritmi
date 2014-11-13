// Esercizio 4
#include <stdio.h>
#include <stdlib.h>

// Prototipi
char **newBook(int n);
void book(int k, char *name, char **m, int len);
void cancel(int k, char **m);
void move(int from, int to, char **m);
void printBook(int n, char **m);

// Main
int main () {
	int num = 0;	// numero posti
	int n, n1;
	int count;
	char **b, name[20], c;
	scanf(" %c", &c);
	while(c != 'f'){
		count = 0;
		switch(c){
		case 'b': // b n --> newBook(n)
			scanf("%d", &num);
			b = newBook(num);
		break;
		case '+': // + k name --> book(k, name)
			scanf("%d", &n);
			scanf("%c", &c);
			do {
				scanf("%c", &c);
				name[count] = c;
				count++;
			}
			while (c != '\n');
			name[count-1] = '\0';
			book(n, name, b, count);
		break;
		case '-': // - k --> cancel(k)
			scanf("%d", &n);
			cancel(n, b);
		break;
		case 'm': // m from to ---> move from to
			scanf("%d%d", &n, &n1);
			move(n, n1, b);
		break;
		case 'p': // p ---> printBook()
			printBook(num, b);
		break;
		}
		scanf(" %c", &c);
	}
	return 0;
}

// Funzioni
char **newBook(int n) {
	char **m;
	int r;
	m = malloc (n * sizeof(char *));
	for (r = 0; r < n ; r++) {
		*(m + r) = malloc(sizeof(char));
	}
	printf("Book creato\n");
	return m;
}

void printBook(int n, char **m) {
	if (n != 0) {
		printf("REGISTER[0..%d]:\n", n-1);
		int i;
		for(i = 0; i < n; i++) {
			if(m[i][0] != '\0')
				printf("%d --> %s\n", i, m[i]);
		}
	}
	else
		printf("Nessun book presente.\n");
}

void book(int k, char *name, char **m, int len) {
	if(m[k][0] == '\0') {
		int r;
		for (r = 0; name[r] != '\0'; r++) {
			m[k][r] = name[r];
			m[k] = realloc(m[k], sizeof(char));
		}
		printf("Aggiunto %s al posto %d\n", name, k);
	}
	else
		printf("Posto già occupato.\n");
}

void cancel(int n, char **m) {
	/*int i = 0;*/
	if(m[n][0] != '\0') {
		/*do {
			m[n][i] = '\0';
			i++;
		}
		while(m[n][i] != '\0');*/
		free(m[n]);
		printf("Posto %d liberato.\n", n);
	}
	else
		printf("Il posto selezionato è già libero.\n");
}

void move(int from, int to, char **m) {
	if(m[from][0] != '\0') {
		if(m[to][0] == '\0') {
			int i = 0;
			do {
				m[to][i] = m[from][i];
				m[from][i] = '\0';
				i++;
			}
			while(m[from][i] != '\0');
			printf("%d ---> %d\n", from, to);
		}
		else
			printf("Il posto %d è già occupato.\n", to);
	}
	else
		printf("Il posto %d non è prenotato.\n", from);
}






