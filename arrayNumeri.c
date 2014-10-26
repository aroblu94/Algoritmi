// Esercizio 1.3
#include <stdio.h>
#define LUNG 50

void create(int arr[]) {
	srand(time(NULL));
	int i;
	for (i = 0; i < LUNG; i++) {
		arr[i] = rand()%100;
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int sum(int arr[]) {
	int i, sum = 0;
	for (i = 0; i < LUNG; i++) {
		sum = sum + arr[i];
	}
	return sum;
}

int main () {
	int arr[LUNG];
	create(arr);
	printf("%d\n", sum(arr));
	return 0;
}
