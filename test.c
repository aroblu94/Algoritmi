#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main () {
	/* testing stack cration */
	Stack *s = new_stack();
	printf("%p\n", s);
	
	/* testing is_empty() */
	if(is_empty(s))
		printf("Stack vuoto.\n");
	else
		printf("Stack pieno.\n");
		
	/* testing top() */
	printf("Last element in stack: %d\n", top(s));
	
	/* testing push */
	push(3, s);
	printf("Last element in stack: %d\n", top(s));
	
	push(2, s);
	printf("Last element in stack: %d\n", top(s));
	
	/* testing pop */
	printf("Popping %d\n", pop(s));
	printf("Last element in stack: %d\n", top(s));
	
	printf("Popping %d\n", pop(s));
	printf("Last element in stack: %d\n", top(s));

	return 0;
}
