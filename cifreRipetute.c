//Esercizio 1.2
#include <stdio.h>

int main () {
    int num, i, a, count;
    printf("Inserisci un numero: ");
    scanf("%d", &num);
    i = 0;
    int n = num;
    do {    //conto il numero di cifre
        n = n / 10;
        i++;
    }
    while (n / 10 != 0);

    int cifre[i];   //riempio l'array con le cifre del numero inserito
    for(; i >= 0; i--) {
        cifre[i] = num % 10;
        num = num / 10;
    }

    for (a = 0; a <= 9; a++) {  //conto le cifre uguali
        count = 0;
        for (i = (sizeof(cifre)/sizeof(int)); i >= 0; i--) {
            if (cifre[i] == a)
                count++;
        }
        printf("La cifra %d è presente %d volte nel numero inserito\n", a, count);
    }
    return 0;
}
