//Esercizio 1.4
#include <stdio.h>
#include <math.h>

int main () {
    //Lati del triangolo
    float a, b, c;
    printf("Inserisci le lunghezze dei lati del triangolo.\na= ");
    scanf("%f", &a);
    printf("b= ");
    scanf("%f", &b);
    printf("c= ");
    scanf("%f", &c);

    if (a<(b+c) && b<(a+c) && c<(a+b)) {
        if (a==b || a==c) {
            if (a==b && a==c)
                printf("Triangolo EQUILATERO\n");
            else
                printf("Triangolo ISOSCELE\n");
        }
        else
            printf("Triangolo SCALENO\n");
    }
    else
        printf("NON è un triangolo\n");
    return 0;
}
