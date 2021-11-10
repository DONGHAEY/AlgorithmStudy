#include <stdio.h>

char cpy[100] = {};

void ppl(char* p) {
	for(int i=0; *(p+i) !='\0'; i++) {
		printf("%c", *(p+i));
	}
	printf("\n");
}

void from(char *p, int start, char f) {
	int cnt = 0;
	for(int i=start; *(p+i)!=f; i++) {
		cpy[cnt] = *(p+i);
		cnt++;
	}
	return ;
}

void str(char *p, char* check, char f) {
	int u, i, cnt=0;
	for(u=0; check[u]!='\0'; u++) ;
	int index = 0;
	for(i=0; *(p+i)!='\0'; i++) {
		if(*(p+i) == *(check+index)) {
			index++;
		} else if(index != u){
			index=0;
		}
		if(index == u) {
			from(p, i+3, f);
			return ;
		}
	}
}

int main() {
	char pl[100];
	 
	char check[7] = {'i','s','a','d','d','e','d'};
	scanf("%s", pl);
	ppl(pl);
	str(pl, check, ',');
	ppl(cpy);
	return 0;
}
