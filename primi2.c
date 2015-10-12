//Numero primo?
#include <stdio.h>

int main() {
	int n,d,count;
	printf("n = ");
	scanf("%d", &n);
	d=1;
	count=0;
	while(d<=n) {
		if(n%d==0)
			count++;
		d++;
	}
	if(count==2)
		printf("n primo");
	else printf("n non primo");
	return 0;
}