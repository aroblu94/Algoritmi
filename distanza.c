//Esercizio 1.11
#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main () {
    char a, b;
    int dist;
    printf("Inserisci due lettere separate da uno spazio: \n");
    scanf("%c %c", &a, &b);
    dist = (int)fabs(tolower(a) - tolower(b)) + 1;
    printf("La distanza tra '%c' e '%c' è %d\n", a, b, dist);
    return 0;
}
