#include <stdio.h>
#include <stdlib.h>
typedef int ELEMENT ;
typedef struct queue{
	ELEMENT * buf;
	int front;
	int rear;
	int size;
}QUEUE;
QUEUE * createQueue( int n );
int isFull( QUEUE *q );
void enQueue( QUEUE *q, ELEMENT data );
int isEmpty( QUEUE *q );
ELEMENT deQueue( QUEUE *q );
void destroyQueue( QUEUE * q );
void printAll( QUEUE *q );
int main() {
	QUEUE *q;
	ELEMENT data;
	
	q = createQueue( 5 );
	enQueue( q, 10 ) ;
	enQueue( q, 20 ) ;
	enQueue( q, 30 ) ;
	enQueue( q, 40 ) ;
	enQueue( q, 50 ) ;
	data = deQueue( q );
	if( data ) printf("%d\n", data );
	enQueue( q, 60 ) ;
	printAll( q );
	destroyQueue( q );
	return 0;
}
QUEUE * createQueue( int n ){
	QUEUE *temp = (QUEUE *) malloc( sizeof(QUEUE));
	temp -> size = n;  // n�� ũ��� �ϴ� ť
	temp -> rear =  -1;
	temp -> front = -1;
	temp -> buf = (ELEMENT *)malloc(sizeof(ELEMENT)); // ũ�� n �� ������ ���� �迭 ����
	return temp;
}
int isFull( QUEUE *q ){
	return q->rear == q->size-1;
}
void enQueue( QUEUE *q, ELEMENT data ){
	 // ���� �� �ִٸ� "queue is full"�̶�� ���
	if(isFull(q)) {
		printf("queue is full\n");
	} else {
		q->buf[++ q->rear] = data;
	}
	 // �ƴϸ� rear�� data ����
}
int isEmpty( QUEUE *q ){
	// ť�� ��� �ֵ��� rear�� front �� � �����ϱ�?
	return q->front == q->rear;
}
ELEMENT deQueue( QUEUE *q ){
	// ��� �ִٸ� "Queue is empty" ����ϰ� 0 ����
	if(isEmpty(q)) {
		printf("Queue is empty");
		return 0;
	} else {
		q->front += 1;
		return q->buf[q->front];
	}
  // �ƴϸ� front��ġ�� ������ ����
}
void printAll( QUEUE *q ){
	// front ���� rear ���� ��� ������ ���
	for(int i=q->front+1; i<=q->rear; i++) {
		printf("%d ", q->buf[i]);
	}
}

void destroyQueue( QUEUE * q ){
	// buf ���� �޸� ����
	free(q->buf);
	// q ���� �޸� ����
	free(q);
}
