// Esercizio 2.4d
#include <stdio.h>

int main () {
    int a, b, c, x, y;
    printf("Inserisci un numero intero DISPARI: ");
    scanf("%d", &a);
    if (a % 2 == 1) {
        b = c = a / 2;
        for (y = 0; y < a; y++) {
            for (x = 0; x < a; x++) {
                if (b <= x && x <= c)
                    printf("o");
                else
                    printf("|");
            }
            if (y < (a / 2)) {
                b--;
                c++;
            }
            else {
                b++;
                c--;
            }
            printf("\n");
        }
    }
    else
        printf("Sono accettate solo dimensioni dispari.\n");
    return 0;
}
