#include <stdio.h>

int arr[100] = {1, 1};

int fibo(int i) {
	if(i<2) return i;
	if(arr[i] !=0) {
		return arr[i];
	} else {
		arr[i] = fibo(i-1) + fibo(i-2);
		return arr[i];
	}
}

int main() {
	int p;
	for(p=1; p<=10; p++) {
		printf("%d\n", fibo(p));
	}
	return 0;
}

