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
void destroy(element **h);
void printInv(element *h);

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
				scanf("%d", &n);
				head = delete(n, head);
				if(head != NULL)
					count--;
			break;
			case '?':
				scanf("%d", &n);
				printf("%d\n", isMember(n, head));
			break;
			case 'c':
				printf("Numero elementi della lista: %d\n", count);
			break;
			case 'p':
				printList(head);
			break;
			case 'o':
				printf("[ ");
				printInv(head);
				printf("]\n");
			break;
			case 'd':
				destroy(&head);
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
		printf("Elemento aggiunto.\n");
		return new;
	}
	else {
		printf("Elemento già presente, nessuna azione.\n");
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

element *delete(int n, element *h) {
	element *curr = h;
	element *prev = h;
	if(isMember(n, h) == 1) {
		for(curr = h; curr != NULL; curr = curr->next) {
			if(curr->info == n) {
				if(curr == h) {
					h = curr->next;
					free(curr);
				}
				else if(curr->next == NULL) {
					prev->next = NULL;
					free(curr);
				}
				else {
					prev->next = curr->next;
					free(curr);
				}
				printf("Eliminato %d.\n", n);
			}
			prev = curr;
		}
	}
	else
		printf("Elemento non presente nella lista, nessuna azione.\n");
	return h;
}

void destroy(element **h) {
	element *p;
	for(p = *h; p != NULL; *h = p) {
		p = delete(p->info, p);
	}
	printf("Lista eliminata.\n");
}

void printInv(element *h) {
	if(h->next == NULL)
		printf("%d ", h->info);
	else {
		printInv(h->next);
		printf("%d ", h->info);
	}
}





