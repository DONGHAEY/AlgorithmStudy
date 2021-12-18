



// int main() {
// 	int Count;
	
// 	char cpy[100000];
	
// 	scanf("%d", &Count);
	
// 	char temp[Count][100000];
	
// 	for(int i=0; i<Count; i++) {
// 		scanf("%s", temp[i]);
// 	}
	
// 	for(int i=0; i<Count; i++) {
// 		int j;
// 		for(j=0; temp[i][j] != '\0'; j++) {
// 			cpy[j] = temp[i][j];
// 		}
		
// 		int k = 0;
// 		for(j=j-1; j>=0; j--) {
// 			if(cpy[j] != '0') {
// 				temp[i][j] = cpy[k++];
// 			} else {
// 				temp[i][j] = '\0';
// 			}
// 		}
// 	}
	
// 	for(int i=0; i<Count; i++) {
// 		int num = 0;
// 		int ten = 1;
// 		int j;
// 		for(j=0; temp[i][j] != '\0'; j++) ;
// 		for(int p =1; p<j; p++) {
// 			ten = ten*10;
// 		}
// 		for(j=0; temp[i][j] != '\0'; j++) {
// 			num += (temp[i][j]- 48)*ten;
// 			ten/=10;
// 		}
		
// 		if(isPrime(num)!=0) {
// 			printf("%d ", num);
// 		}
		
// 	}
	
// 		return 0;
// }


#include<stdio.h>

int isPrime(int num) {
	int i;
	for(i=2; i<num; i++) {
		if (num % i == 0) {
			break;
		}
	}
    if ( i == num ) {
			return 1;
		} else {
			return 0;
		}
}
int A[1001];
int Z[1001];
int main()
{
int a;
scanf("%d",&a);
for(int i = 0 ; i < a; i ++){
scanf("%d",&A[i]);
}
rev(A , a);
}

int rev(int A[], int a)
{
int im;
for(int i = 0 ; i < a; i++){
while(A[i] != 0){
im = A[i]%10;
A[i] = A[i]/10;
Z[i] = Z[i]*10+im;
}
}
for(int i=0;i<a;i++){
	if(isPrime(Z[i]) !=0 ) {
		printf("%d ",Z[i]);
	}
}
}

