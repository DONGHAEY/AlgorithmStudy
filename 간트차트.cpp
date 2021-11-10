#include <stdio.h>

int main()

{
	char a[10];
	int p, q, o, m = 0;
	
	printf ("간트차트 만들기\n\n");
	
	printf ("총 프로세스 수 : ");
	
	scanf ("%d", &p); 
	
	for (int i=0; i<p; i++) {
		printf ("\n");
		scanf ("%s", &a); 
		scanf ("%d", &q);
		
		if (i > 0) {
			for (o=0; o<=2*m; o++) {
				printf (" ");
			}
		}
		
		for (o=0; o<q; o++) {
			printf ("■");
		}
		
		m+=o;
		
		printf(" %d일 (%s)", m, a);
	}
}
