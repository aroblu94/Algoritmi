// Esercizio 1.3
#include <stdio.h>

int create() {
	srand(time(NULL));
	int i, *point;
	for (i = 0; i < 50; i++) {
		arr[i] = rand() % 1000;
	}
	*point = arr;
	return *point;
}

void print(int *p) {
	arr[] = *p;
	int i;
	for (i = 0; i < 50; i++) {
		printf("%d", arr[i]);
	}
	printf("\n");
}

void sum() {
	arr[] = *point;
	int i, somma = 0;
	for(i = 0; i < 50; i++) {
		somma = somma + arr[i];
	}
	printf("%d", somma);
}

int main () {
	int arr[50];
	print(create());
	sum();
	printf("\n");
	return 0;
}
