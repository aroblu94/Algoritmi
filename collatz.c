//Esercizio 1.5
#include <stdio.h>

int succ(int n);

int main () {
	int num, lung = 1;
	printf("Inserisci il numero del quale vuoi calcolare la sequenza di Collatz: ");
	scanf("%d", &num);
	do {
		printf("%d ", num);
		if (num == 1)
			break;
		else {
			num = succ(num);
			lung++;
		}
	}
	while (num != 1);
	printf("\nLunghezza: %d\n", lung);
	return 0;
}

int succ(int n) {
	if(n % 2 == 0)
		return n / 2;
	else
		return (n * 3) + 1;
}
