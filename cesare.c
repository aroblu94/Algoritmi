//Esercizio 2.3
#include <stdio.h>

int main () {
    int key;
    char msg, c;
    printf("Inserisci una chiave e il messaggio da cifrare terminando con '.' separati da uno spazio:\n");
    scanf("%d%c", &key, &msg);
    do {
        if (c != ' ')
            printf("%c", c + key);
        else
            printf("%c", c);
    }
    while ((c = getchar()) != '.');
    printf("\n");
    return 0;
}
