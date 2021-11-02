#include <stdio.h>

int main()

{
	int a;
	int *p;
	p = &a;
	int **pp = &p;
	int ***ppp = &pp;
	int ****pppp = &ppp;
	printf ("%d %d %d %d", p, pp, ppp, pppp);
}
