#include <stdio.h>

int two(int value) { //2 �Է½� 10�� ���;� �Ѵ�
	if(value == 0) return 0;
	if(value == 1) return 1;
	printf("%d",two(value/2));
	return value%2;
}

int main(void) {
	int value;
	scanf("%d", &value);
	printf("%d", two(value));
}
