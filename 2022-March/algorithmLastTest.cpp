#include <stdio.h>

int column, row, i, j;
char desks[100][100];
int students[100][100] = {0};

int main() {
	scanf("%d %d", &row, &column);
	for(i=0; i<row; i++) {
		scanf("%s", &desks[i]);
	}
	int now = 0;
	int left, right;
	while(now >= column) {
		for(int l=0; l<row; l++) {
			if(desks[l][now] == '.') {
				left+=1;
			} else if(desks[l+1][now] == '.') {
				right += 1;
			}
		}
		now += 3;
	}
}
