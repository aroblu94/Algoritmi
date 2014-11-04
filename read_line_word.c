// Esercizio 3.3
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *read_line(void);
char *read_word(void);

int main () {
	char *p1, *p2;
	printf("%p\n", read_line());
	printf("%p\n", read_word());
	return 0;
}

char *read_line(void) {
	int a = 10, count = 0;
	char *p1 = malloc(a), c;
	while(c != '\n') {
		scanf("%c", &c);
		p1[count] = c;
		if(count++ == a) {
			a = a * 2;
			p1 = realloc(p1, a);
		}
	}
	return p1;
}

char *read_word(void) {
	int a = 10, count = 0;
	char *p2 = malloc(a), c;
	while(isalnum(c)) {
		scanf("%c", &c);
		p2[count] = c;
		if(count++ == a) {
			a = a * 2;
			p2 = realloc(p2, a);
		}
	}
	return p2;
}