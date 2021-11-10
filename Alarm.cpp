#include <stdio.h>
#include <time.h>
#include <windows.h>

int main()

{
	int z, j, q, k;
	
	printf("\n몇 분뒤에 깨워 드릴까요? : ");
	
	scanf("%d", &k);
	
	time_t t = time(NULL);
	
  	struct tm tm = *localtime(&t);
	
	z = (tm.tm_hour*60) + tm.tm_min + k;
	
	j = z/60%24;
	
	q = z%60;
	
	printf("\n네 사용자님, %d시 %d분에 알람을 맞췄어요", j, q);
	
	int l;
	
	l = 60000 * k;
	
	Sleep(l);
	
	printf("\n\n사용자님 일어나십시오 설정한 시간에 다다렀습니다");
	
	Beep(1000, 1000);
	Beep(1000, 1000);
	Beep(1000, 1000);
}
