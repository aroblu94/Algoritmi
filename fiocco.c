//Esercizio 2.2a
#include <stdio.h>
#include "libpsgraph.h"

void disegna(double x, int i) {
	if(i == 0)
		draw(x);
	else {
		disegna(x/3, i-1);
		turn(-60);
		disegna(x/3, i-1);
		turn(120);
		disegna(x/3, i-1);
		turn(-60);
		disegna(x/3, i-1);
	}
}

void triangolo(double x, int i) {
	int a;
	for (a = 0; a < 3; a++) {
		disegna(x, i);
		turn(120);
	}
}

int main () {
	start("fiocco.ps");
	double x;
	int i;
	printf("Inserisci due numeri (lunghezza in mm e numero segmenti):\n");
	scanf("%lf%d", &x, &i);
	triangolo(x, i);
	end();
	return 0;
}
