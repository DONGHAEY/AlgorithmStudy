#include <stdio.h>

int main()

{
	int x, y, p, i;
	scanf ("%d", &x);
	int m = x;
	int a[x][x];
	for (p = 0; p<x; p++) {
		for (i = 0; i<x; i++) {
			a[p][i] = m;
			m++;
		}
	}
	
	
	for(p = 0; p<x; p++) {
		for (i=0; i<x; i++) {
			printf ("%d ", a[p][i]);
		}
		printf ("\n");
	}
}
