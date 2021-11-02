//10.23 selection arrange algorithm//
#include <stdio.h>

int main() {
	int i, j, temp, n=4, k;
	int list[n] = {4, 5, 1, 2};
	for(i=0; i<n-1; i++) {
		k = i;
		for(j=i+1; j<n; j++) {
			if(list[j]<list[k]) {
				k = j;
			}
		}
		temp = list[i];
		list[i] = list[k];
		list[k] = temp;
	}
	for(i=0; i<n; i++) {
		printf("%d", list[i]);
	}
	return 0;
}
