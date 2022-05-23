#include <stdio.h>

int i, j, row, column;
int arr[100][100];
int result[100][100] = {0};
int cnt;

int sideCheck(int i, int j) { //놓을 수 있다면 1을 반환 
	int left;
	left = j-1;
	if(left>=-1 && result[i][left] != 1) {
		return 1;
	} else {
		return 0;
	}
}

int diagonalCheck(int i, int j) { //놓을 수 있다면 1을 반환 
	int left, right;
	int leftUp, rightUp;
	if(i>0) {
		left = j-1;
		right = j+1;
		
		if(left < 0) {
			leftUp = 0;
		} else {
			leftUp = result[i-1][left];
		}
		if(right+1 > column) {
			rightUp = 0;
		} else {
			rightUp = result[i-1][right];
		}
		if(leftUp==1 || rightUp ==1) {
			return 0;
		} else {
			return 1;
		}
	} else {
		return 1;
	}
}


int main() {
	scanf("%d %d", &row, &column);
	for(i=0; i<row; i++) {
		for(j=0; j<column; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	for(i=0; i<row; i++) {
		for(j=0; j<column; j++) {
			if(arr[i][j] != 0 && sideCheck(i, j) && diagonalCheck(i, j)) {
				result[i][j] = 1;
				cnt ++;
			}
		}
	}
	for(i=0; i<row; i++) {
		for(j=0; j<column; j++) {
			printf("%d ", result[i][j]);
		}
		printf("\n");
	}
	printf("%d", cnt);
	
}
