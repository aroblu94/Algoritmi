//Esercizio 1.2
#include <stdio.h>
#include <math.h>

int main() {
	int a,b,c;
	float x1,x2;
	printf("Calcolo delle radici X1 e X2 di un'equazione di secondo grado del tipo ax^2+bx+c=0 \n");
	printf("Inserisci a: \n");
	scanf("%d", &a);
	printf("Inserisci b: \n");
	scanf("%d", &b);
	printf("Inserisci c: \n");
	scanf("%d", &c);

	printf("Equazione scelta: %dx^2 + %dx + %d = 0 \n", a, b, c);

	float delta = b*b - 4*a*c;
	if(delta < 0) {
		printf("L'equazione data non ha soluzioni \n");
	}
	else if(delta = 0) {
		x1 = -b/(2*a);
		printf("L'equazione ha solo una soluzione x = %f\n", x1);
	}
	else {
		x1 = (-b + (sqrt(delta)))/(2 * a);
		x2 = (-b - (sqrt(delta)))/(2 * a);
		printf("X1 = %f\nX2 = %f\n", x1, x2);
	}
	return 0;
}
