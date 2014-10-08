// Esercizio 1.5
#include <stdio.h>

int main () {
    float a, s;
    s=0;
    printf("Questo programma calcola la somma dei numeri inseriti (con n<=0 si ferma la lettura)\n");
    while (a>0) {
        printf("Inserisci un numero: ");
        scanf("%f", &a);
        s=s+a;
    }
    printf("La somma dei numeri inseriti è %f\n", s);
    return 0;
}
