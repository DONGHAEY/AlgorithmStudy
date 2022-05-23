#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Student {
	int age;
	char name[10];
	struct Student *next;
}Student;

Student* insertFront(Student *h, char *name, int age) {
	Student *p = (Student*)malloc(sizeof(Student));
	strcpy(p->name, name);
	p->age = age;
	p->next = h;
	return p;
}

void insertBack(Student *h, char *name, int age) {
	Student *t = h;
	while(t) {
		if(t->next == NULL) {
			break;
		}
		t = t->next;
	}
	Student *p = (Student*)malloc(sizeof(Student));
	strcpy(p->name, name);
	p->age = age;
	p->next = NULL;
	t->next = p;
}

Student* firstInsert(char *name, int age) {
	Student *p = (Student*)malloc(sizeof(Student));
	strcpy(p->name, name);
	p->age = age;
	p->next = NULL;
	return p;
}

void print(Student *L) {
	Student *t = L;
	while(t) {
		printf("name : %s | age : %d \n", t->name, t->age);
		t= t->next;
	}
}

void freeAll(Student *L) {
	Student *t = L;
	while(t != NULL) {
		t = L;
		L= L->next;
		free(t);
		t = NULL;
	}
}


int main() {
	Student *L = firstInsert("오동현", 18);
	L = insertFront(L, "아구찜", 19);
	insertBack(L, "따따단", 20);
	insertBack(L, "대통령", 21);
	insertBack(L, "신촌", 20);
	print(L);
	freeAll(L);
	return 0;
}
