#include <stdio.h>

void proc(int n) {
	printf("%lld\n", n);
	if(n==1) return ;
	if(n%2==1) {
		proc((n*3) + 1);
	} else {
		proc(n/2);
	}
}

int main() {
	int n;
	scanf("%d", &n);
	proc(n);
	return 0;
}
