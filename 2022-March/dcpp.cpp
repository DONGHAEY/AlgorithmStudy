#include <stdio.h>
#include <stdlib.h>

int main() {
	char str[20];
	scanf("%[^\n]", str);
	printf("%s", str);
}
