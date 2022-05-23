#include <stdio.h>
int dp[50];

int fibo(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (dp[n] != -1) return dp[n];
    return dp[n] = (fibo(n - 1) + fibo(n - 2));
}

int main() {
	for(int i=0; i<50; i++) {
		dp[i] = -1;
	}
    printf("%d", fibo(5));
}
