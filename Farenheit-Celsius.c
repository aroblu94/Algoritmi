//Esercizio 1.1
#include <stdio.h>

int main() {
    float d=0;
    printf("Inserisci la temperatura in Farenheit\n");
    scanf("%f", &d);
    int d1=0;
    d1=d-32;
    d=d1/1.8;
    printf("Temperatura in Celsius: %f\n", d);
    return 0;
}
