#include <stdio.h>
#include <stdlib.h>

struct element {
	int info;
	struct element *next;
};

typedef struct element element;

element *insert(int n, element *h);
void printList(element *h);
int isMember(int n, element *h);
element *delete(int n, element *h);

int main (){
	element *head = NULL;
	char c, tmp;
	int n, count = 0;
	while((c = getchar()) != 'f' ){
		switch(c){
			case '+':
				scanf("%d", &n);
				head = insert(n, head);
				if(head != NULL)
					count++;
			break;
			case '-':

			break;
			case '?':
				scanf("%d", &n);
				printf("%d\n", isMember(n, head));
			break;
			case 'c':
				printf("Numero elementi: %d\n", count);
			break;
			case 'p':
				printList(head);
			break;
			case 'o':

			break;
			case 'd':

			break;
		}
		scanf("%c", &tmp);
	}
	return 0;
}

element *insert(int n, element *h) {
	if(isMember(n, h) == 0) {
		element *new = malloc(sizeof(element));
		new->info = n;
		new->next = h;
		printf("Aggiunto\n");
		return new;
	}
	else {
		printf("Già presente, non aggiunto\n");
		return h;
	}
}

void printList(element *h) {
	element *p;
	printf("[ ");
	for(p = h; p != NULL; p = p->next) {
		printf("%d ", p->info);
	}
	printf("]\n");
}

int isMember(int n, element *h) {
	int bool = 0;
	element *p;
	for(p = h; p != NULL; p = p->next) {
		if(p->info == n) {
			bool = 1;
			break;
		}
	}
	return bool;
}

/*element *delete(int n, element *h) {

}*/







