// Esercizio 2.4a
#include <stdio.h>

int main () {
    int a, x, y;
    printf("Inserisci un numero intero: ");
    scanf("%d", &a);
    for (y = 0; y < a; y++) {
        for (x = 0; x < a; x++) {
            if ( y % 2 == 0)
                printf("+");
            else
                printf("o");
        }
        printf("\n");
    }
    return 0;
}
