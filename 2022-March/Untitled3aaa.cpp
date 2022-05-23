#include <stdio.h>

int main() {
	int testCase;
	int a, b;
	int result;
	scanf("%d", &testCase);
	for(int t=0; t<testCase; t++) {
		scanf("%d %d", &a, &b);
		result = a;
		for(int i=1; i<b; i++) {
			result *= a;
		}
		printf("%d", result%10);
	}
	return 0;
}
