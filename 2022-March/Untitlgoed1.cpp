#include <stdio.h>


int arr[51][51];

int main() {
	int t, max_x, max_y, su;
	while(t--) {
		scanf("%d %d %d", &max_x, &max_y, &su);
		for(int i=0; i<su; i++) {
			scanf("%d %d", &x, &y);
			arr[y][x] = 1;
		}
		
	}
}
