
#include <stdio.h>

long long dp[10001] = {0, 1, 2, 3};

int stack(int m) {
	if(dp[m]) return dp[m];
	return dp[m] = (stack(m-1) + stack(m-2))%100000007;
}

int main() {
	int n;
	scanf("%d", &n);
	printf("%d", stack(n));
	return 0;
}
