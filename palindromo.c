//Esercizio 1.7
#include <stdio.h>
#include <stdbool.h>

int main () {
    char string[100];
    int i, j;
    bool pal = false;
    i = 0;
    printf("Inserisci una stringa terminata da un punto\n");
    do {    //Salvo la stringa in un array di caratteri
        scanf(" %c", &string[i]);
        i++;
    }
    while (string[i-1] != '.');

    i -= 2; //Per non considerare \n e .
    for (j = 0; j < 100; j++) {    //Controllo se è palindroma
        if (tolower(string[j]) == tolower(string[i])) {
            pal = true;
            i--;
            if (i < 0)
                break;
        }
        else {
            pal = false;
            break;
        }
        if (j == i)
            break;
    }
    if (pal)
        printf("La stringa è palindroma.\n");
    else
        printf("La stringa NON è palindroma.\n");
    return 0;
}
