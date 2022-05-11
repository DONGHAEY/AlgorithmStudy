#include <stdio.h>

long long DP[91] = {0, 1, 1};

int main() {
	int n;
	scanf("%d", &n);
	for(int i=3; i<=n; i++) {
		DP[i] = DP[i-1] + DP[i-2];
	}
	printf("%d", DP[n]);
}
