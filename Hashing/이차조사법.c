#include <stdio.h>

int k, n;

int hash(int key) {
	return key%n;
}

int main() {
	int i, index, key;
	scanf("%d", &n);
	int list[n];
	for(i=0; i<n; i++) {
		scanf("%d", &list[n]);
	}
	scanf("%d", &key);
	index = hash(key);
	while(1) {
		if(list[index]==0) {
			list[index]=key;
			break;
		} else {
			k++;
			index=(hash(key) + (k*k))%n;
		}
	}
	printf("%d", index);
	return 0;
}
