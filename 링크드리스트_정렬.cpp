//��// ������ �����ؼ� ���� ��ũ�� ����Ʈ ���� �˰��� //��//

#include <stdio.h>
#include <stdlib.h>

typedef struct listNode {
	int data;
	struct listNode *link;
}listNode;

typedef struct {
	listNode *head;
}linkedList_h;

linkedList_h* createlinkedList_h();
linkedList_h* insertFirstNode(linkedList_h *L, int x);
void printAll(linkedList_h *L);
void freeAll(linkedList_h *L);
void insertLastNode(linkedList_h *L, int x);
void swap(listNode *n1, listNode *n2);
int getsize(linkedList_h *L);
void sort(linkedList_h *L);

int main() {
	
	linkedList_h *L;
	L= createlinkedList_h();
	insertFirstNode(L, 4);
	insertLastNode(L, 5);
	insertLastNode(L, 1);
	insertLastNode(L, 2);
	insertLastNode(L, 3);
	insertLastNode(L, 7);
	insertLastNode(L, 2);
	insertLastNode(L, 11);
	insertLastNode(L, 56);
	insertLastNode(L, 39);
	insertLastNode(L, 49);
	insertLastNode(L, 77);
	insertLastNode(L, 100);
	insertLastNode(L, 194);
	insertLastNode(L, 98);
	insertLastNode(L, 96);
	insertLastNode(L, 153);
	insertLastNode(L, 135);
	insertLastNode(L, 132);
	insertLastNode(L, 130);
	insertLastNode(L, 213);
	insertLastNode(L, 276);
	insertLastNode(L, 298);
	insertLastNode(L, 135);
	printAll(L);
	sort(L);
	printf("\n");
	printAll(L);
	free(L);
	
	return 0;
	
}

linkedList_h * createlinkedList_h() {
	linkedList_h *L = (linkedList_h*)malloc(sizeof(linkedList_h));
	L->head = NULL;
	return L;
}

linkedList_h * insertFirstNode(linkedList_h *L, int x) {
	listNode *p = (listNode *)malloc(sizeof(listNode));
	p->data = x;
	p->link=L->head;
	L->head = p;
}

void printAll(linkedList_h *L) {
	listNode *p = L->head;
	while(p) {
		printf("%d ",p->data);
		p = p->link;
	}
}

void freeAll(linkedList_h *L) {
	listNode *p = L->head;
	while(L->head != NULL) {
		p = L->head;
		L->head = L->head->link;
		free(p);
		p=NULL;
	}
}

void insertLastNode(linkedList_h *L, int x) {
	listNode *p = L->head;
	while(p->link) {
		p = p->link;
	}
	listNode *newNode = (listNode*)malloc(sizeof(listNode));
	newNode->data = x;
	newNode->link = NULL;
	p->link = newNode;
}

void swap(listNode *n1, listNode *n2) {
	int temp;
	temp = n1->data;
	n1->data = n2->data;
	n2->data = temp;
}

int getsize(linkedList_h* L) {
	listNode *p = L->head;
	int count = 0;
	while(p) {
		count++;
		p = p->link;
	}
	return count;
}

void sort(linkedList_h *L) {
	listNode *p = L->head;
	listNode *buf;
	int cnt = 0;
	int size = getsize(L);
	while(p) {
		buf = L->head;
		for(int i=1; i<size-cnt; i++) {
			if(buf->data > buf->link->data) {
				swap(buf, buf->link);
			}
			buf = buf->link;
		}
		p = p->link;
		cnt++;
	}
}
