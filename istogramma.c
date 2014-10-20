//Esercizio 2.1
#include <stdio.h>

int main () {
    char string[100], c;
    int i;
    i = 0;
    printf("Inserisci una stringa terminata da un punto:\n");
    do {    //Carico la stringa letta in un array di caratteri
        scanf(" %c", string[i]);
        i++;
    }
    while (string[i-1] != '.');

    return 0;
}
