#include <stdio.h>

int main()
	
{
	int x, y, z, p = 1;
	scanf ("%d", &x); //5가 입력되면
	for (y=x; y>=1; y--) { //y는 3가 되고 1이 될때 까지 반복한다
		for (z=1; z<=y; z++) { //z가 5가 될 때 까지 z를 반복한다
			printf (" "); //5개의 공백이 끝나고 이제 괄호 탈출 준비
		}
		
		for (z=1; z<=y; z++) {
			printf ("*");
		}
		printf ("\n");
	}
}
