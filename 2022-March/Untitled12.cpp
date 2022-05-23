#include <stdio.h>

int main() {
	int N, M, F;
	scanf("%d", &N);
	int arr[N];
	for(int i=0; i<N; i++) {
		scanf("%d" , &arr[i]);
	}
	scanf("%d", &M);
	F= N-1;
	while(F > -1 && M >= 0) {
		if(arr[F]<=M) {
			printf("%d", F);
			M-=arr[F];
		}
		if(arr[F] > arr[F-1]) {
			F-=1;
		} else if(arr[F-1] > M) {
			F-=2;
		}
	}
	return 0;
}

