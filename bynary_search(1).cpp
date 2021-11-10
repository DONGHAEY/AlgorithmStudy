#include <stdio.h>
#define SIZE 6
int arr[SIZE] = {0, 3, 7, 8, 10, 11};
int middle, sv, count;
int search(int start, int last) {
	if (start <= last) {
		middle = (start+last)/2;
		count ++;
		if(sv == arr[middle]) return count;
		if(sv < arr[middle]) return search(start, middle-1);
		if(sv > arr[middle]) return search(middle+1, last);
	}
	return -1;
}
int main() {
	scanf("%d", &sv);
	int re = search(0, SIZE-1);
	if(re == -1) {
		printf("찾으려는 값이 없음");
	} else {
		printf("%d번 만에 찾았음", re);
	} 
}
