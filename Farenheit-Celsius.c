//Esercizio 1.1
#include <stdio.h>

int main() {
	float temp=0;
	printf("Farenheit: \n");
	scanf("%f", &temp);
	temp=(temp-32)/1.8;
	printf("Celsius: %f", temp);
	return 0;
}
