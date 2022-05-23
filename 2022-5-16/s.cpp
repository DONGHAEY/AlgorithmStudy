#include <stdio.h>

int m;

void f(int k) {
	if (k<m) {
		return;
	}
	f(k-1);
	if(k%2 == 1)
		printf("%d\n", k);
}


int main() {
	int n;
	scanf("%d %d", &m, &n);
	f(n);
}
