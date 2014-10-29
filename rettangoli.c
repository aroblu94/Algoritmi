// Esercizio 1.6
#include <stdio.h>

// Strutture
typedef struct {
	int x, y;
} Punto;

typedef struct {
	Punto a, c;
} Rettangolo;

// Prototipi
Rettangolo creaRett (Punto a, Punto c);
void stampaRett (Rettangolo *r);
float areaRett (Rettangolo r);
Punto centroRett (Rettangolo r);
void trasla (Rettangolo r, int x, int y);
char isDentro (Punto p, Rettangolo r);

// Main
int main () {
	int x, y;
	Punto a, c, p;
	Rettangolo r, *pointToR;
	pointToR = &r;
	printf("Inserisci le coordinate del punto A (separate da uno spazio): ");	// Creo il punto A
	scanf("%d%d", &x, &y);
	a.x = x;
	a.y = y;
	printf("Inserisci le coordinate del punto C (separate da uno spazio): ");	// Creo il punto C
	scanf("%d%d", &x, &y);
	c.x = x;
	c.y = y;
	r = creaRett(a, c);	// Creo il rettangolo coi punti dati
	/*printf("Inserisci le coordinate del punto P (separate da uno spazio): ");	// Creo il punto P
	scanf("%d%d", &x, &y);
	p.x = x;
	p.y = y;*/
	stampaRett(pointToR);	//Stampo il rettangolo
	return 0;
}

// Altre funzioni
Rettangolo creaRett (Punto a, Punto c) {
	Rettangolo r;
	r.a = a;
	r.c = c;
	return r;
}

void stampaRett (Rettangolo *r) {
	printf("A(%d,%d) C(%d,%d)\n", r -> a.x, r -> a.y, r -> c.x, r -> c.y);
}

float areaRett (Rettangolo *r) {
	float area;






















