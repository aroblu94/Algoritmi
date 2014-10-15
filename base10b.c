//Esercizio 1.3
#include <stdio.h>

int main () {
    int b, n, i, x;
    printf("Inserisci un intero b e un numero in base 10 da convertire in base b: \n");
    scanf("%d%d", &b, &n);
    i = 0;
    int nbak = n;
    do {    //conto il numero di cifre
        nbak = nbak / b;
        i++;
    }
    while (nbak / b != 0);

    printf("Numero convertito: ");

    int n2[i]; //riempio l'array con le cifre convertite in base b
    for(x = 0; x <= i; x++) {
        n2[i] = n % b;
        n = n / b;
        printf("%d", n2[i]);
    }
    printf("\n");

    return 0;
}

