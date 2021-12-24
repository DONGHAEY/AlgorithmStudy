#include <stdio.h>

int n, k;

int hash(int key) {
	return key%n;
}

int main() {
	int key, index;
	scanf("%d", &n);
	int list[n];
	int i;
	for(i=0; i<n; i++) {
		scanf("%d", &list[i]);
	}
	scanf("%d", &key);
	index = hash(key);
	while(1) {
		if(list[index] == 0) {
			list[index] = key;
			break;
		} else {
			k++;
			index = (hash(key)+k)%n;
		}
	}
	printf("%d", index);
}
