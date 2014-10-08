// Esercizio 1.7
#include <stdio.h>

int main () {
    int counter = 0;
    float sum, a;
    sum = 0;

    while (counter < 10) {
        printf("Inserisci un numero: ");
        scanf("%f", &a);
        sum += a;
        if (a != 0)
            counter++;
    }
    printf("La somma dei 10 numeri non nulli inseriti è: %f\n", sum);
    return 0;
}
