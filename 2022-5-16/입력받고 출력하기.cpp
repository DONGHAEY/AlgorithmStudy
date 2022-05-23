#include <stdio.h>

int main() {
	int d[20][20] = {}, i,j,n,x,y;
	for(i=1; i<=19; i++) {
		for(j=1; j<=19; j++) {
			scanf("%d", &d[i][j]);
		}
	}
	scanf("%d", &n);
	while(n--) {
		scanf("%d %d", &x, &y);
		for(i=1; i<=19; i++) d[x][i] =! (d[x][i]);
		for(i=1; i<=19; i++) d[i][y] =! (d[i][y]);
	}
	for(i=1; i<=19; i++) {
		for(j=1; j<=19; j++) {
			printf("%d ", d[i][j]);
		}
		printf("\n");
	}
	return 0;
}
