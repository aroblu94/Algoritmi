#include <stdio.h>

typedef struct {
	char name[25];
	char num[10];
} Contact;

int main () {
	Contact rubrica[100];
	int sel, i;
	for(i = 0; i < 100; i++) {
		rubrica[i].name = rubrica[i].num = NULL;
	}
	Contact prova1 = {"mario rossi", "3491234567"};
	Contact prova2 = {"luca provato", "234432432"};
	rubrica[0] = prova1;
	rubrica[1] = prova2;
	printf(".:RUBRICA:.\n1) Visualizza rubrica\n2) Aggiungi numero\n");
	printf("(La rubrica supporta la memorizzazione di massimo 100 contatti,\ni contatti non possono avere un nome che superi i 25 caratteri\ne un numero che superi le 10 cifre)\n");
	scanf("%d", &sel);
	if (sel == 1) {
		for(i = 0; i < 100; i++) {
			printf("%s\n%s\n", rubrica[i].name, rubrica[i].num);
			if(rubrica[i].name == '0')
				break;
		}
	}
	return 0;
}
