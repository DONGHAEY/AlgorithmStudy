#include <stdio.h>

int t;
char arr[100];
int check[100];
int size;

int main()
{
	int i;
	scanf("%d", &t);
	while(t--) {
		scanf("%s", arr);
		for(i=0; arr[i] != NULL; i++) {
			check[size++] = arr[i];
			if(size > 1 && check[size-2] == '(' && check[size-1] == ')') {
				size -= 2;
			}
		}
		if(size == 0) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
		size = 0;
	}
}
