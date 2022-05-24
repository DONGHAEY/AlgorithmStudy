#include <stdio.h>

char PN[10]; //Process Name은 최대 10바이트까지 받을 수 있다.
int N, day, total_day; //total_day는 전역변수기에 0으로 초기화된다.

int main()

{	
	printf ("간트차트 만들기\n\n");
	
	printf ("총 프로세스 수 : ");
	
	scanf ("%d", &N); //총 프로세스 수를 입력받는다
	
	for (int i=0; i<N; i++) {
		printf ("\n");
        
		scanf ("%s", &PN); //프로세스명을 입력받는다
        
		scanf ("%d", &day); //프로세스 진행 일을 입력받는다
		
		if (i > 0) {
			for (int j=0; j<=2*total_day; j++) {
				printf (" ");
			}
		}
		for (int j=0; j<day; j++) {
			printf ("■");
		}
		
		total_day += day; //총 일수를 저장하는 total_day 변수에 하나의 프로세스 일을 더한다
		
		printf("총 %d일 (%s)", total_day, PN);
	}
}
