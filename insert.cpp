//10.23 insert arrange algorithm//
#include <stdio.h>

int main() {
	int i,j,key,temp,n=4;
	int list[n]={4,5,1,2};
	for(i=1; i<n; i++) {
		key = list[i];
		for(j=i-1; j>=0 && list[j]>key; j--) {
			list[j+1]= list[j];
		}
		list[j+1] = key;
	}
	for(i=0;i<n;i++) {
		printf("%d", list[i]);
	}
}
