//Esercizio 1.3
#include <stdio.h>
#include <ctype.h>

int main () {
    char c;
    printf("Inserisci una lettera: \n");
    scanf("%c", &c);
    c = tolower(c);

    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u') {
        printf("La lettera inserita è una VOCALE italiana \n");
    }
    else if(c=='j' || c=='k' || c=='w' || c=='x' || c=='y') {
        printf("La lettera inserita NON fa parte dell'alfabeto italiano \n");
    }
    else {
        printf("La lettera inserita è una CONSONANTE italiana \n");
    }
    return 0;
}
