#include <stdio.h>

int arr[100];
int M, N;

int main() {
	scanf("%d", &N);
	for(int i=0; i<N; i++) {
		scanf("%d ", &arr[i]);
	}
	scanf("%d", &M);
	int temp_m;
	int max_cnt;
	int max_before;
	int big_i;
	while(M >= 0) {
		for(int i=0; i<N; i++) {
			max_cnt = 0;
			temp_m = M - arr[i];
			for(int j=0; j<N; j++) {
				max_cnt += temp_m / arr[j];
			}
			if(i==0) {
				max_before = max_cnt;
			}
			if(max_before <= max_cnt) {
				max_before = max_cnt;
				big_i = i;
			}
		}
		if(M-arr[big_i]>=0) {
			printf("%d ", big_i);
			M-= arr[big_i];
		}else {
			break;
		}
	}
}
