#include <stdio.h>
#include <stdlib.h>
#define SIZE 4

typedef int ELEMENT;

typedef struct Stack {
	ELEMENT buf[SIZE];
	int top;
}Stack;

void createStack(Stack *s) {
	s->top = -1;
}

int isEmpty(Stack *s) {
	return s->top == -1;
}

int isFull(Stack *s) {
	return s->top == SIZE-1;
}

void Push(Stack *s, ELEMENT data) {
	if(!isFull(s)) {
		s->top++;
		s->buf[s->top] = data;
	} else {
		printf("\nStack is Full");
	}
}

ELEMENT Pop(Stack *s) {
	if(!isEmpty(s)) {
		return s->buf[s->top--];
	} else {
		printf ("Stack is Empty");
	}
}



int main() {
	Stack s;
	createStack(&s);
	int value;
	int scan;
	do {
		printf("1. push, 2.pop, 0.finish");
		scanf("%d", &scan);
		switch(scan) {
			case 1: {
				scanf("%d", &value);
				Push(&s, value);
				break;
			}
			case 2: {
				printf("%d\n", Pop(&s));
				break;
			}
		}
	}while(scan);
}
