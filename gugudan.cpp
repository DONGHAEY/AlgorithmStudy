#include <stdio.h>
int main(){
	int COLUMN = 5, ROW = 5;
    int array[ROW][COLUMN]={0}; // 2차원 배열 생성후 0으로 초기화
    int i,j; // for 구문을 돌리기 위해 사용될 변수 
    int cnt=1; // 초기값을 1로.
	int C=0, R=0;
	scanf ("%d", &C);
	R=C;
    
    for(i=0;i<R;i++){
        if(i%2==0){ //i를 2로 나눈 값후 나머지값이 0일때 즉, 0이거나 짝수인 경우 
            for(j=0;j<C;j++){
                array[i][j]=cnt++;
            }
        }    
        else{ //그 외의 경우 
            for(j=C-1;j>=0;j--){
                array[i][j]=cnt++;
            }        
        }
    } 
//배열에 숫자 입력  
    
    for(i=0;i<R;i++){
        for(j=0;j<C;j++){
            printf("%2d ", array[i][j]);
        }
        printf("\n"); 
    }
//배열을 표시 -이전과 동일 
    
    return 0;
}
