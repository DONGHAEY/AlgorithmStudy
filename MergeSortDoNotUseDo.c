#include <stdio.h>

int cpy[100], cnt, n;

void print(int list[]) {
	printf("%d단계 : ", ++cnt);
	for(int l=0; l<n; l++) {
		printf("%d ", list[l]);
	}
	printf("\n");
}

void merge(int list[], int left, int mid, int right) {
	int i=left, j=mid+1, k=left;
	while(i<=mid && j<=right) {
		if(list[i]<=list[j]) {
			cpy[k++] = list[j++];
		} else {
			cpy[k++] = list[i++];
		}
	}
	int l;
	if(mid<i) {
		for(l=j; l<=right; l++) cpy[k++] = list[l];
	} else {
		for(l=i; l<=mid; l++) cpy[k++] = list[l];
	}
	for(l=left; l<=right; l++) {
		list[l] = cpy[l];
	}
	print(list);
}

void sort(int list[], int left, int right) {
	if(left< right) {
		int mid = (left+right)/2;
		sort(list, left, mid);
		sort(list, mid+1, right);
		merge(list, left, mid, right);
	}
}

int main() {
	scanf("%d", &n);
	int list[n];
	for(int l=0; l<n; l++) {
		scanf("%d", &list[l]);
	}
	sort(list, 0, n-1);
}