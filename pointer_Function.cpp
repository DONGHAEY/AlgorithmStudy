#include <stdio.h>

int go(int (*fp)(int), int value);
int ppl(int value);

int main() {
	int (*fp)(int);
	fp = ppl;
	go(fp, 3);
}

int go(int (*fp)(int), int value) {
	(*fp)(value);
}

int ppl(int value) {
	printf("%d", value);
}
