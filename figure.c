#include <stdio.h>
#include <math.h>

typedef struct {
	int x;
	int y;
} Punto;

typedef struct {
	Punto a;
	Punto b;
} Rettangolo;

typedef struct {
	Punto o;
	int c;
} Cerchio;

int main () {
	float areaRett, perimRett, areaCerchio, circCerchio;
	Rettangolo r = {{0,0}, {4,4}};
	Cerchio c = {{0,0}, 3};
	areaRett = abs(0 - 4) * abs(0 - 4);
	perimRett = abs(0 - 4)*2 + abs(0 - 4)*2;
	areaCerchio = M_PI * 3 * 3;
	circCerchio = 2 * 3 * M_PI;
	printf("Area rettangolo: %f\nPerimetro rettangolo: %f\nArea cerchio: %f\nCirconferenza cerchio: %f\n", areaRett, perimRett, areaCerchio, circCerchio);
	return 0;
}
