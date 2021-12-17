#include <stdio.h>
int fibo(int n){
	if (n < 2) return n;
	return fibo(n-1) + fibo(n-2);
}

int main(){
	int i;
    for(i=1; i<=10; i++)
    {
        printf("%d\n", fibo(i));
    }
	return 0;
}
