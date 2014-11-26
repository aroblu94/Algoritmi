#include "stack.h"
#include <stdbool.h>
#include <stdlib.h>

Stack* new_stack() {
	/* Allocate memory for a new stack */
	Stack *s = (Stack*)malloc(sizeof(Stack));
	s->lung = 0;
	s->first = NULL;
	s->last = NULL;
	return s;
}

void make_empty(Stack *s) {
	free(s);
}

bool is_empty(Stack *s) {
	if(s->lung == 0)
		return true;
	else
		return false;
}

int top(Stack *s) {
	if(!is_empty(s)) {
		return s->last->info;
	}
	else
		return -1;
}

int pop(Stack *s) {
	Element *curr = s->last;
	Element *prev = s->first;
	int n;
	if(!is_empty(s)) {
		for(; prev != NULL; prev = prev->next) {
			if(prev->next == s->last) {
				prev->next = NULL;
				s->lung -= 1;
				n = s->last->info;
				free(s->last);
				s->last = prev;
				break;
			}
		}
	}
	return n;
}

void push(int n, Stack *s) {
	Element *e = malloc(sizeof(Element));
	e->next = NULL;
	e->info = n;
	if(!is_empty(s)) {
		s->last->next = e;
		s->last = e;
	}
	else {
		s->last = e;
		s->first = e;
	}
	s->lung += 1;
}




