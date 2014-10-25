#include <stdio.h>
#include <math.h>

typedef struct {
	int x, y;
} Punto;

typedef struct {
	Punto p1, p2;
} Rettangolo;

typedef struct {
	Punto o;
	double r;
} Cerchio;

int main () {
	float areaRett, perimRett, areaCerchio, circCerchio;
	Rettangolo r;
	r.p1.x = 0;
	r.p1.y = 1;
	r.p2.x = 5;
	r.p2.y = 3;
	Cerchio c;
	c.o.x = 0;
	c.o.y = 1;
	c.r = 3;
	areaRett = abs(r.p1.x - r.p2.x) * abs(r.p1.y - r.p2.y);
	perimRett = abs(r.p1.x - r.p2.x)*2 + abs(r.p1.y - r.p2.y)*2;
	areaCerchio = M_PI * pow(c.r, 2);
	circCerchio = 2 * c.r * M_PI;
	printf("Area rettangolo: %f\nPerimetro rettangolo: %f\nArea cerchio: %f\nCirconferenza cerchio: %f\n", areaRett, perimRett, areaCerchio, circCerchio);
	return 0;
}
