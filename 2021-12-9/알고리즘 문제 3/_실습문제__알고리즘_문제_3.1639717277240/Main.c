#include <stdio.h>
int main() {
	int cnt;
	int Criteria;
	scanf("%d", &cnt);
	scanf("%d", &Criteria);
	
	int arr[cnt];
	int overlist[100] = {0};
	
	for(int i=0; i<cnt; i++) {
		scanf("%d", &arr[i]);
	}
	
	int over = 0;
	int k = 0;
	for(int i=0; i<cnt; i++) {
		if(Criteria<arr[i]) {
			over+=1;
			overlist[k] = over;
		} else {
			over = 0;
			k++;
		}
	}
	
	for(int i=0; i<cnt-1; i++) {
		// printf("%d ", overlist[i]);
		if(overlist[i] > overlist[i+1]) {
			int temp = overlist[i];
			overlist[i] = overlist[i+1];
			overlist[i+1] = temp;
		}
	}
	
 	printf("%d", overlist[cnt-1]);
	
	return 0;
}
