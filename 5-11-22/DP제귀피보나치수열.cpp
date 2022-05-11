#include <stdio.h>

int dp[201] = {0, 1, 1, 2};

int fibo(int n) 
{
	if(dp[n])return dp[n];
	return dp[n] = (fibo(n-1) + fibo(n-2))%10009;
}

int main() {
	int n;
	scanf("%d", &n);
	printf("%d", fibo(n));
	return 0;
}
