#include <stdio.h>
#include <stdlib.h>

typedef struct Student{
	char name;
	struct Student *next;
}Student;

Student* firstInsert(char data) {
	Student *t = (Student*)malloc(sizeof(Student));
	t ->name = data;
	t -> next = NULL;
	return t;
}

void insert(Student* l, char data) {
	Student *t = l;
	while(t) {
		if(t->next == NULL) {
			break;
		}
		t = t->next;
	}
	Student *n = (Student*)malloc(sizeof(Student));
	n->name = data;
	n->next = NULL;
	t ->next = n;
}

void print(Student* h) {
	Student *t = h;
	while(t != NULL) {
		printf("%c ", t->name);
		t = t->next;
	}
}


int main() {
	Student *h;
	h = firstInsert('A');
	insert(h, 'B');
	insert(h, 'C');
	insert(h, 'D');
	insert(h, 'E');
	insert(h, 'F');
	print(h);
	return 0;
}
