// Esercizio 1.6
#include <stdio.h>
#include <stdlib.h>
// MIN e MAX mi servono per calcolare se P è interno o esterno al rettangolo
#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))

// Strutture
typedef struct {
	float x, y;
} Punto;

typedef struct {
	Punto a, c;
} Rettangolo;

// Prototipi
Rettangolo creaRett (Punto a, Punto c);
void stampaRett (Rettangolo *r);
float areaRett (Rettangolo *r);
Punto centroRett (Rettangolo *r);
void trasla (Rettangolo *r, int x, int y);
int isDentro (Punto *p, Rettangolo *r);

// Main
int main () {
	float x, y;
	Punto a, c, p, q, *pointToP;
	Rettangolo r, *pointToR;
	pointToR = &r;
	pointToP = &p;
	printf("Inserisci le coordinate del punto A (separate da uno spazio): ");	// Creo il punto A
	scanf("%f%f", &x, &y);
	a.x = x;
	a.y = y;
	printf("Inserisci le coordinate del punto C (separate da uno spazio): ");	// Creo il punto C
	scanf("%f%f", &x, &y);
	c.x = x;
	c.y = y;
	r = creaRett(a, c);	// Creo il rettangolo coi punti dati
	stampaRett(pointToR);	//Stampo il rettangolo
	printf("Area: %f\n", areaRett(pointToR));
	q = centroRett(pointToR);
	printf("Centro rettangolo: C(%f,%f)\n", q.x, q.y);
	printf("\nInserisci le coordinate del punto P (separate da uno spazio): ");	// Creo il punto P
	scanf("%f%f", &x, &y);
	p.x = x;
	p.y = y;
	if(isDentro(pointToP, pointToR) == 1)
		printf("Il punto P(%f,%f) è INTERNO al rettangolo\n", p.x, p.y);
	else
		printf("Il punto P(%f,%f) è ESTERNO al rettangolo\n", p.x, p.y);
	printf("\nDi quanto vuoi traslare il rettangolo? (x e y) ");
	scanf("%f%f", &x, &y);
	trasla(pointToR, x, y);
	printf("==> ");
	stampaRett(pointToR);
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
	printf("Rettangolo A(%f,%f) C(%f,%f)\n", r->a.x, r->a.y, r->c.x, r->c.y);
}

float areaRett (Rettangolo *r) {
	float area;
	area = abs(r->a.x - r->c.x) * abs(r->a.y - r->c.y);
	return area;
}

Punto centroRett (Rettangolo *r) {
	Punto p;
	p.x = abs(r->a.x - r->c.x)/2;
	p.y = abs(r->a.y - r->c.y)/2;
	return p;
}

void trasla (Rettangolo *r, int x, int y) {
	r->a.x += x;
	r->a.y += y;
	r->c.x += x;
	r->c.y += y;
}

int isDentro (Punto *p, Rettangolo *r) {
	if(p->x >= MIN(r->a.x, r->c.x) && p->x <= MAX(r->a.x, r->c.x)) {
		if(p->y >= MIN(r->a.y, r->c.y) && p->y <= MAX(r->a.y, r->c.y))
			return 1;
	}
	else
		return 0;
}















