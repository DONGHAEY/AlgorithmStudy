
#include <stdio.h>

int cnt;

void stack(int m) {
	if(m<0) return ;
	if(m==0) {
		cnt+=1;
		return;
	}
	stack(m-1);
	stack(m-2);
}

int main() {
	int n;
	scanf("%d", &n);
	stack(n);
	printf("%d", cnt);
	return 0;
}
