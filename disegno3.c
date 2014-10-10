// Esercizio 2.4c
#include <stdio.h>

int main () {
    int a, x, y;
    printf("Inserisci un numero intero: ");
    scanf("%d", &a);
    for (y = 0; y < a; y++) {
        for (x = 0; x < a; x++) {
            if (x == y)
                printf("|");
            else if (x > y)
                printf("+");
            else
                printf("o");
        }
        printf("\n");
    }
    return 0;
}
