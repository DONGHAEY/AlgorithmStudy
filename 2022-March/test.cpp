#include <stdio.h>

int list[100][100];
int result[100][100] = 0;
int row, column, cnt;

int main() {
	scanf("%d %d", &row, &column)
	for(int i=0; i<row; i++) {
		for(int j=0; j<column; j++) {
			scanf("%d", &list[i][j]);
		}
	}
	for(int i=0; i<row; i++) {
		if(i==0) {
			for(int j=0; j<column; j++) {
				if(j%2 ==0 && list[i][j] == 1) {
					result[i][j] = 1;
					cnt+=1;
				}
			}
		} else {
			for(int j=0; j<column; j++) {
			
			}
		}
	}
}
