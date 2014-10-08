// Esercizio 1.6
#include <stdio.h>
#include <math.h>

int main () {
    float a, s, m;
    int n=0;
    s=0;
    m=0;
    printf("Questo programma calcola la media dei numeri inseriti (con n<=0 si ferma la lettura)\n");
    while (a>0) {
        printf("Inserisci un numero: ");
        scanf("%f", &a);
        s=s+a;
        n+=1;
    }
    n-=1;
    m=s/n;
    printf("La somma dei numeri inseriti è %f\n", m);
    return 0;
}
