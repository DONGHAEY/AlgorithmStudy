#include <stdio.h>

int main()
	
{
	int x, y, z, p = 1;
	scanf ("%d", &x); //5�� �ԷµǸ�
	for (y=x; y>=1; y--) { //y�� 3�� �ǰ� 1�� �ɶ� ���� �ݺ��Ѵ�
		for (z=1; z<=y; z++) { //z�� 5�� �� �� ���� z�� �ݺ��Ѵ�
			printf (" "); //5���� ������ ������ ���� ��ȣ Ż�� �غ�
		}
		
		for (z=1; z<=y; z++) {
			printf ("*");
		}
		printf ("\n");
	}
}
