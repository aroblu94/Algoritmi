#ifndef _STACK_H
#define _STACK_H

#include <stdbool.h>

/*\
|*| Element is something
|*| in the Stack.
|*| En Element contains the info
|*| that is the number contained in it
|*| and a reference to the next Element
|*| in the Stack
\*/
typedef struct {
	int info;
	struct Element *next;
} Element;

/*\
|*| The Stack is a list
|*| of Elements, where
|*|	lung = length of the Stack (aka number of elements - 1)
|*| first is the first element of the Stack
|*| last is the last element of the Stack
|*| last is the one will be popped
\*/
typedef struct {
	int lung;
	Element *first;
	Element *last;
} Stack;

/*\
|*| new_stack() create a new, empty Stack
\*/
Stack* new_stack();
/*\
|*| make_empty() flush the stack
\*/ 
void make_empty(Stack *s);

/*\ 
|*| if the stack is empty is_empty() returns 1
|*| else returns 0
|*| we have to check stack[0]
\*/
bool is_empty(Stack *s);

/*\
|*| top() returns the last 
|*| element (int) of the stack
\*/
int top(Stack *s);

/*\
|*| pop() remove the last
|*| element (int) from the stack
\*/ 
int pop(Stack *s);

/*\
|*| push(n) insert n
|*| on the head of the stack
\*/
void push(int n, Stack *s);

#endif
