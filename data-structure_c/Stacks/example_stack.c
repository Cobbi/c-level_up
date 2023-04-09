/*
A stack is a linear data structure that follows the principle of Last In First Out (LIFO).
This means the last element inserted inside the stack is removed first.

You can think of the stack data structure as the pile of plates on top of another.

Here, you can:

    * Put a new plate on top
    * Remove the top plate

And, if you want the plate at the bottom, you must first remove all the plates on top.
This is exactly how the stack data structure works.

Basic Operations of Stack

There are some basic operations that allow us to perform different actions on a stack.

    * Push: Add an element to the top of a stack
    * Pop: Remove an element from the top of a stack
    * IsEmpty: Check if the stack is empty
    * IsFull: Check if the stack
    is full
    * Peek: Get the value of the top element without removing it

    ** Stack Time Complexity

For the array-based implementation of a stack, the push and pop operations take constant time,
 i.e. O(1).

  ** Applications of Stack Data Structure

Although stack is a simple data structure to implement, it is very powerful. 
The most common uses of a stack are:

    * To reverse a word - Put all the letters in a stack and pop them out.
    Because of the LIFO order of stack, you will get the letters in reverse order.
    * In compilers - Compilers use the stack to calculate the value of expressions like 2 + 4 / 5 * (7 - 9) by converting the expression to prefix or postfix form.
    * In browsers - The back button in a browser saves all the URLs you have visited previously in a stack. Each time you visit a new page, it is added on top of the stack. When you press the back button, the current URL is removed from the stack, and the previous URL is accessed.

*/




// Stack implementation

#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int count = 0;

// Creating a stack
struct stack {
	int items[MAX];
	int top;
};
typedef struct stack st;

void createEmptyStack(st *s) {
	s->top = -1;
}

// check if the stack is full
int isFull(st *s) {
	if(s->top == MAX - 1)
		return 1;
	else
		return 0;
}

// check if the stack is empty
int isEmpty(st *s) {
	if (s->top == -1)
		return 1;
	else
		return 0;
}

// Add elements into stack
void push(st *s, int newItem) {
	if(isFull(s)) {
		printf("\nSTACK FULL\n");
	} else {
		s->top++;
		s->items[s->top] = newItem;
	}
	count++;
}

// Remove elements from stack
void pop(st *s) {
	if (isEmpty(s)) {
		printf("\nSTACK EMPTY\n");
	} else {
		printf("Item popped = %d\n", s->items[s->top]);
		s->top--;
	}
	count--;
	printf("\n");
}

// Display elements from stack
void printStack(st *s) {
	printf("Stack: ");
	for(int i = 0; i < count; i++) {
		printf("%d ", s->items[i]);
	}
	printf("\n");
}

// Driver code
int main(int argc, char const *argv[])
{
	int ch;
	st *s = (st *)malloc(sizeof(st));

	createEmptyStack(s);

	push(s, 23);
	push(s, 34);
	push(s, 12);
	push(s, 78);
	push(s, 5);

	printStack(s);

	pop(s);

	printf("\nAfter poping out\n");
	printStack(s);
	return 0;
}