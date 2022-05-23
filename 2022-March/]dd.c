#include <stdio.h>
#define swap(x,y,t) ((t)=(x), (x)=(y), (y)=(t))

int quick(int list[], int left, int right) {
	int temp, low, high, pivot;
	pivot = list[left];
	low = left;
	high = right+1;
	
	do {
		do {
			low++;
		}while(list[low]<pivot);
		
		do {
			high--;
		}while(list[high]>pivot);
		if(low<high) swap(list[low], list[high], temp);
	} while(low<high);
	swap(list[high], list[left], temp);
	return high;
}

void sort(int list[], int left, int right) {
	if(left<right) {
		int mid = quick(list, left, right);
		sort(list, left, mid-1);
		sort(list, mid+1, right);
	}
}

int main() {
	int N;
	int i;
	scanf("%d", &N);
	int arr[N];
	for(i=0; i<N; i++) {
		scanf("%d", &arr[i]);
	}
	sort(arr, 0, N-1);
	for(i=0; i<N; i++) {
		printf("%d ", arr[i]);
	}
}
