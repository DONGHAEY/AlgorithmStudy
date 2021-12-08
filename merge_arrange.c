#include <stdio.h>
int sorted[100], count;

void merge(int list[], int left, int mid, int right) {
	int i,j,k,l;
	i=left;
	j=mid+1;
	k=left;
	//i는 왼쪽부분 j는 오른쪽 부분// 
	while(i<=mid && j<=right) { //하나라도 만족안하면 멈춘다 즉, 한쪽 정렬을 끝까지 가서, 끝냈다면 이 문은 끝난다| 정렬하는 코드// 
		if(list[i]<=list[j]) {
			sorted[k++] = list[i++];
		} else {
			sorted[k++]=list[j++];
		}
	}
	if(i>mid) { //한쪽이 다 끝났더라도 남은 한 쪽이 못 끝난 경우가 있다. 그래서 이 아래의 코드를 실행한다// 
		for(l=j; l<=right; l++) {
			sorted[k++] = list[l];
		}
	} else {
		for(l=i; l<=mid; l++) {
			sorted[k++] = list[l];
		}
	}
	//sorted에 있는 정렬배열을 기존배열로 옮긴다// 
	for(l=left; l<=right; l++) {
		list[l] = sorted[l];
	}
}

void mergesort(int list[], int left, int right) {
	int mid;
	if(left<right) {
		mid =(left+right)/2;
		printf("%d %d\n", left, mid);
		mergesort(list, left, mid);
		printf("%d %d\n", mid+1, right);
		mergesort(list, mid+1, right);
		printf("merge (%d %d %d)\n", left, mid, right);
		merge(list,left,mid,right);
	}
}

int main() {
	int list[8] = {27,10,12,20,25,13,15,22};
	mergesort(list, 0, 7);
	printf("%d\n ", count);
	for(int i=0; i<8; i++) {
		printf("%d ", list[i]);
	}
	return 0;
}
