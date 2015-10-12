//Divisori e numeri primi, primo esercizio
#include <stdio.h>

int main() {
	int n,d,count;
	printf("n = ");
	scanf("%d", &n);
	d=1;
	printf("divisori di n: ");
	while(d<=n) {
		if(n%d==0) {
			printf("%d ", d);
			count++;
		}
		d++;
	}
	printf("\nn ha %d divisori", count);
	return 0;
}