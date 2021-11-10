#include <stdio.h>

int f(int *a, int *b) {
	if (*a >= *b) {
		int t;
		t = *a;
		*a = *b;
		*b = t;
	}
}

int main() {
	
	int arr[10], cnt=1;
	for (int j=0; j<10; j++) {
		scanf ("%d", &arr[j]);
	}
	for (int i=0; i<9; i++) {
		for (int m = cnt; m<10; m++) {
			f(&arr[i], &arr[m]);
		}
		cnt++;
	}
	
	for (int p=0; p<10; p++) {
		printf ("%d", arr[p]);
		printf (" ");
	}
}
