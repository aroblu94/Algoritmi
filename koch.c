//Esercizio 2.2
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

int main () {
	start("koch.ps");
	double x;
	int i;
	printf("Inserisci due numeri (lunghezza in mm e numero segmenti):\n");
	scanf("%lf%d", &x, &i);
	disegna(x, i);
	end();
	return 0;
}
