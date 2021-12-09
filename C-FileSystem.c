#include <stdio.h>

int main(void)
{
	int state;
	char buf1[30];
	char buf2[30];
	
	FILE * file = fopen("Test.txt", "rt");
	
	if (file==NULL) {
		printf("file open eror!\n");
	}
	fputs("µ¥ÀÌÅÍ ÀÔ·Â : ", stdout);
	fgets(buf1, sizeof(buf1), stdin);
	puts(buf1);
	fgets(buf2, sizeof(buf2), file);
	puts(buf2);
	
	state=fclose(file);
	if(state!=0) {
		printf("file close error! \n");
		return 1;
	}
	return 0;
}
