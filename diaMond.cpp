#include <stdio.h>

int main()

{
	int n, i, o, p;
	
	static int l = 2;
	
	scanf ("%d", &n);
	
	for (i=n; i>=1; i--) {
		for (p=1; p<=i; p++) {
			printf (" ");
		}
		printf ("*");
		for (o=2; o<l; o++) {
			printf (" ");
		}
		l=l+2;
		printf ("*");
		printf ("\n");
	}
	
		for (i=1; i<=n; i++) {
		for (p=i; p>=1; p--) {
			printf (" ");
		}
		printf ("*");
		for (o=l; o>4; o--) {
			printf (" ");
		}
		l=l-2;
		printf ("*");
		printf ("\n");
	}
	
}
