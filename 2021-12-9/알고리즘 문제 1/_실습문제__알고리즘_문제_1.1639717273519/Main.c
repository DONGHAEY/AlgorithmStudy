#include <stdio.h>

int arr[10];

int main() {
	char input[100] = {};
	scanf("%s", input);
	for(int i=0; input[i]!='\0'; i++) {
		input[i] = input[i]-48;
		arr[input[i]]+=1;
	}
	int index=0, temp;
	for(int i=0; i<10; i++) {
		if(arr[i]>=arr[index]) {
			index = i;
		}
	}
	printf("%d", index);
	return 0;
}
