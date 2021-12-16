#include <stdio.h>
#define graph 51

int y_intercept, inclination;

int main() {
	
	int pan1[graph][graph] = {0};
	int pan2[graph][graph] = {0};
	int pan3[graph][graph] = {0};
	int pan4[graph][graph] = {0};
	
	printf("기울기를 입력하세요 ");
	scanf("%d", &inclination);
	printf("\ny절편을 입력하세요 ");
	scanf("%d", &y_intercept);
	
	int value;
	//제 일 사분면//
	for(int i=0; i<graph; i++) {
		value = (i*inclination)+y_intercept;
		if(value<graph && value>=0) {
			pan1[i][value] = 1;
		}
	}
	//제 2 사분면//
	for(int j=1; j<graph; j++) {
		value = -1*(j*inclination)+y_intercept;
		if(value>=0 && value<graph) {
			pan2[j][value]= 1;
		}
	}
	//제 3 사분면//
	
	//제 4 사분면//
	
	
	
	printf("\n제 1사분면\n");
	for(int i=graph-1; i>=0; i--) {
		for(int j=0; j<graph; j++) {
			if(pan1[j][i]==0) {
				printf(" ");
			} else {
				printf("▲");
			}
		}
		printf("\n");
	}
	printf("제 2사분면\n");
	for(int i=graph-1; i>=0; i--) {
		for(int j=graph-1; j>0; j--) {
			if(pan2[j][i]==0) {
				printf(" ");
			} else {
				printf("▲");
			}
		}
		printf("\n");
	}
	printf("제 3사분면\n");
	printf("제 4사분면\n")
}
