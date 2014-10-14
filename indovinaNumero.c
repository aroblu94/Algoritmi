//Esercizio 2.2
#include <stdio.h>

int main () {
    int min, max;
    min = 0;
    max = 1000;
    char rep;
    printf("Pensa ad un numero compreso tra 0 e 1000.\nIl numero è %d?", ((max+min)/2));
    scanf(" %c", &rep);
    while (rep != '=') {
        if (rep == '<')
            max = (max+min)/2;
        else
            min = (max+min)/2;
        printf("Il numero è %d?", ((max+min)/2));
        scanf(" %c", &rep);
    }
    printf("Il numero è %d!\n", ((max+min)/2));
    return 0;
}
