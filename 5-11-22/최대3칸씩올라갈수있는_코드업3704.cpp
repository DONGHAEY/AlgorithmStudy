#include <stdio.h>

int memo[100001] = {0,1,2,4};

int f(int x) {
	if (x<0) return 0;
	if(memo[x]) return memo[x];
	return memo[x] = (f(x-1) + f(x-2) + f(x-3))%1000;
}


int main() {
	int d;
	scanf("%d", &d);
	printf("%d", f(d));
	return 0;
}
