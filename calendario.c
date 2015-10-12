//calendario mensile
#include <stdio.h>

int main() {
	int m,d,giorni,tmp,c,s;
	printf("Inserisci il numero del mese (1 = gennaio, ... , 12 = dicembre): ");
	scanf("%d", &m);
	printf("Inserisci il giorno di inizio mese (1 = lunedi, ... , 7 = domenica): ");
	scanf("%d", &d);

	if(m==2)
		giorni=28;
	else if(m==4 || m==6 || m==9 || m==11)
		giorni=30;
	else 
		giorni=31;

	//giorni+=d-1;

	printf(" L  M  M  G  V  S  D \n");
	tmp=1;
	s=0;
	while(tmp<=giorni) {
		if(s==7) {
			printf("\n");
			s=0;
		}
		if(d>1) {
			while(d>0) {
				printf("   ");
				d--;
				s++;
			}
		}
		else {
			printf(" %d ",tmp);
			tmp++;
			s++;
		}
	}

	return 0;
}