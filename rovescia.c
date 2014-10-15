//Esercizio 1.1
#include <stdio.h>

int main () {
    int a[100];
    int i;
    printf("Inserisci i numeri (0 per terminare)\n");
    for(i = 0; i < 100; i++) {
        scanf(" %d", &a[i]);
        if (a[i] == 0)
            break;
    }
    i--;
    for(; i >= 0; i--) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
