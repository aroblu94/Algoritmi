// Esercizio 1.8
#include <stdio.h>
#include <math.h>

int main () {
    float r, a;
    r = 0;
    a = 0;
    printf("Inserisci il raggio del cerchio: ");
    scanf("%f", &r);
    if ( r < 0)
        printf("Il raggio non può essere negativo\n");
    else if (r == 0)
        printf("L'area del cerchio è nulla\n");
    else {
        a = r * r * M_PI;
        printf("L'area del cerchio è %f\n", a);
    }
    return 0;
}
