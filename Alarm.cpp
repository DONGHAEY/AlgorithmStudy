#include <stdio.h>
#include <time.h>
#include <windows.h>

int main()

{
	int z, j, q, k;
	
	printf("\n�� �еڿ� ���� �帱���? : ");
	
	scanf("%d", &k);
	
	time_t t = time(NULL);
	
  	struct tm tm = *localtime(&t);
	
	z = (tm.tm_hour*60) + tm.tm_min + k;
	
	j = z/60%24;
	
	q = z%60;
	
	printf("\n�� ����ڴ�, %d�� %d�п� �˶��� ������", j, q);
	
	int l;
	
	l = 60000 * k;
	
	Sleep(l);
	
	printf("\n\n����ڴ� �Ͼ�ʽÿ� ������ �ð��� �ٴٷ����ϴ�");
	
	Beep(1000, 1000);
	Beep(1000, 1000);
	Beep(1000, 1000);
}
