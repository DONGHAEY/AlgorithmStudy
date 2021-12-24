#include <stdio.h>

int k,n;

int doublehash(int key) {
	if(key>10) {
		return 4;
	}
	else return 5;
}

int hash(int key) {
	return key%n;
}

int main() {
	int key, i;
	scanf("%d", &n);
	int list[n];
	for(i=0; i<n; i++) {
		scanf("%d", &list[i]);
	}
	scanf("%d", &key);
	int index = hash(key);
	while(1) {
		if(list[index] == 0) {
			list[index] = key;
			break;
		} else {
			k++;
			index=(hash(key) + doublehash(key)*k)%n
		}
	}
	printf("%d", index);
}
