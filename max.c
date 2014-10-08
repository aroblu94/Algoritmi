//Esercizio 1.10
#include <stdio.h>

int main () {
    float a, b;
    printf("Inserisci il primo numero: ");
    scanf("%f", &a);
    printf("Inserisci il secondo numero: ");
    scanf("%f", &b);
    printf("%f è il massimo.\n", (a > b ? a : b));
    return 0;
}
