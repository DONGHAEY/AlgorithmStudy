#include <stdio.h>

char deskList[100][100];
int statList[100][100] = {0};

int blank_column_count[100];
int blank_column_chart[100];

int row, column, cnt=0;
//int now;


int sideCheck(int i, int j) { //놓을 수 있다면 1을 반환 
	int left = j-1;
	int right = j+1;
	
	if(left>=-1 && statList[i][left] != 1 && statList[i][right] != 1) {
		return 1;
	} else {
		return 0;
	}
}

int diagonalCheck(int i, int j) { //놓을 수 있다면 1을 반환 
	int left, right;
	int leftUp, rightUp;
	int leftDown, rightDown;
	if(i==0) {
		left = j-1;
		right = j+1;
		
		if(left < 0) {
			leftDown = 0;
		} else {
			leftDown = statList[i+1][left];
		}
		if(right+1 > column) {
			rightDown = 0;
		} else {
			rightDown = statList[i+1][right];
		}
		if(leftDown==1 || rightDown == 1) {
			return 0;
		} else {
			return 1;
		}
	} else if(i>0) {
		left = j-1;
		right = j+1;
		
		if(left < 0) {
			leftUp = 0;
			leftDown = 0;
		} else {
			leftUp = statList[i-1][left];
			leftDown = statList[i+1][left];
		}
		if(right+1 > column) {
			rightUp = 0;
			rightDown = 0;
		} else {
			rightUp = statList[i-1][right];
			rightDown = statList[i+1][right];
		}
		if(leftUp==1 || rightUp ==1 || leftDown==1 || rightDown == 1) {
			return 0;
		} else {
			return 1;
		}
	} else if(i+1 == row){
		left = j-1;
		right = j+1;
		
		if(left < 0) {
			leftUp = 0;
		} else {
			leftUp = statList[i-1][left];
		}
		if(right+1 > column) {
			rightUp = 0;
		} else {
			rightUp = statList[i-1][right];
		}
		if(leftUp==1 || rightUp ==1) {
			return 0;
		} else {
			return 1;
		}
	}
}


void sort() {
	int i,j,key,temp;
	for(i=1; i<column; i++) {
		key = blank_column_count[i];
		for(j=i-1; j>=0 && blank_column_count[j]<key; j--) {
			blank_column_count[j+1]= blank_column_count[j];
			blank_column_chart[j+1] = j;
		}
		blank_column_count[j+1] = key;
		blank_column_chart[j+1] = i;
	}
}
int main() {
	int loop;
	scanf("%d", &loop);
	for(int p=0; p<loop; p++) {
	//입력 받기 - row와 column 
	scanf("%d %d", &row, &column);
	//입력 받기 - 책상 유무 
	for(int i=0; i<row; i++) {
		scanf("%s", deskList[i]);
	}
	//빈책상 순위 정렬
	for(int i=0; i<column; i++) {
		for(int j=0; j<row; j++) {
			if(deskList[j][i] == '.') {
				blank_column_count[i] += 1;
			}
		}
	}
	sort();
	
	int temp;
	for(int i=0; i<column; i++) {
		temp = blank_column_chart[i];
		for(int j=0; j<row; j++) {
			if(deskList[j][temp] != 'x' && sideCheck(j, temp) && diagonalCheck(j, temp)) {
				statList[j][temp] = 1;
			}
		}
		
	}

	for(int i=0; i<row; i++) {
		for(int j=0; j<column; j++) {
			printf("%d ", statList[i][j]);
		}
		printf("\n");
	}
		for(int i=0; i<row; i++) {
			for(int j=0; j<column; j++) {
				if(statList[i][j] == 1) {
					cnt +=1;
				}
				statList[i][j] = 0;
			}
		}
		for(int i=0; i<column; i++) {
			blank_column_count[i] = 0;
			blank_column_chart[i] = 0;
		}
		printf("%d\n", cnt);
		cnt = 0;
	}
	return 0;
}
