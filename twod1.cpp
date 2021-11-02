#include <stdio.h>

int two(int value) { //2 입력시 10이 나와야 한다
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
