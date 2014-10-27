//Esercizio 2.1
#include <stdio.h>
#include <time.h>

int fibonacci(int n);

int main () {
	time_t m;
	time_t now = time(NULL);
	int n;
	printf("Inserisci un numero:\n");
	scanf("%d", &n);
	printf("Fibonacci in posizione %d = %d\n", n, fibonacci(n));
	m = difftime(time(NULL), now);
	printf("Tempo di calcolo: %ld\n", m);
	return 0;
}

int fibonacci(int n) {
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return fibonacci(n - 1) + fibonacci(n - 2);
}
