#include <stdio.h>
int main(){
	int COLUMN = 5, ROW = 5;
    int array[ROW][COLUMN]={0}; // 2���� �迭 ������ 0���� �ʱ�ȭ
    int i,j; // for ������ ������ ���� ���� ���� 
    int cnt=1; // �ʱⰪ�� 1��.
	int C=0, R=0;
	scanf ("%d", &C);
	R=C;
    
    for(i=0;i<R;i++){
        if(i%2==0){ //i�� 2�� ���� ���� ���������� 0�϶� ��, 0�̰ų� ¦���� ��� 
            for(j=0;j<C;j++){
                array[i][j]=cnt++;
            }
        }    
        else{ //�� ���� ��� 
            for(j=C-1;j>=0;j--){
                array[i][j]=cnt++;
            }        
        }
    } 
//�迭�� ���� �Է�  
    
    for(i=0;i<R;i++){
        for(j=0;j<C;j++){
            printf("%2d ", array[i][j]);
        }
        printf("\n"); 
    }
//�迭�� ǥ�� -������ ���� 
    
    return 0;
}
