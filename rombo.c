//Esercizio rombo
#include <stdio.h>

int main() {
	int n=0;
	printf("n (deve essere dispari) =");
	scanf("%d", &n);
	if(n%2==0) {
		printf("n pari. abort");
	}
	else {
		int x,y,b,a;
        a = b = n / 2;
        for (y = 0; y < n; y++) {
            for (x = 0; x < n; x++) {
                if (a <= x && x <= b)
                    printf("o");
                else
                    printf("|");
            }
            if (y < (n / 2)) {
                a--;
                b++;
            }
            else {
                a++;
                b--;
            }
            printf("\n");
        }
	}
	return 0;
}