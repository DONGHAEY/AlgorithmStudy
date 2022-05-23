#include <stdio.h>

char arr[100];
int x, y, temp, first;
bool changed;
int j, cnt;

int main() {
	scanf("%d %d", &y, &x);
	for(int i=0; i<y; i++) {
		scanf("%s", arr);
		if(i==0) {
			first = arr[0];
		}
		for(j=0; arr[j+1] != NULL; j++) {
			if(i%2 == 0) {
				if(j%2 == 0) {
					if(arr[j] != first) {
						cnt+=1;
					}
				} else {
					if(arr[j] == first) {
						cnt+=1;
					}
				}
			} else {
				if(j%2 == 0) {
					if(arr[j] == first) {
						cnt +=1;
					}
				} else {
					if(arr[j] != first) {
						cnt+=1;
					}
				}
			}
		}
	}
	printf("%d\n", cnt);
	return 0;
}
