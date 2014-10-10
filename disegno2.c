// Esercizio 2.4b
#include <stdio.h>

int main () {
    int a, x, y;
    printf("Inserisci un numero intero: ");
    scanf("%d", &a);
    for (y = 0; y < a; y++) {
        for (x = 0; x < a; x++) {
            if (x % 2 == 0)
                printf("o");
            else
                printf("+");
        }
        printf("\n");
    }
    return 0;
}
