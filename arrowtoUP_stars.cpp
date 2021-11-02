#include <stdio.h>

int main()
	
{
	int x, y, z, p=1;
	scanf ("%d", &x); //5가 입력되면
	for (y=x/2+1; y>=1; y--) { //y는 3가 되고 1이 될때 까지 반복한다
		for (z=1; z<y; z++) { //z가 5가 될 때 까지 z를 반복한다
			printf (" "); //5개의 공백이 끝나고 이제 괄호 탈출 준비
		}
		
		for (z=1; z<=p; z++) {
			printf ("*"); //1 3 5
		}
		if (p<x) {
			p+=2;
		}
		printf ("\n");
	}
}

//https://bssm21-hs.goorm.io/learn/lecture/27352/c-%ED%94%84%EB%A1%9C%EA%B7%B8%EB%9E%98%EB%B0%8D2/lesson/1380777/7-5-%EC%9D%B4%EC%B0%A8%EC%9B%90-%EB%B0%B0%EC%97%B4-3-%EB%8C%80%EA%B0%81%EC%84%A0-%EC%B6%9C%EB%A0%A5
