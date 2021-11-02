#include <stdio.h>
#include <windows.h>
int main()

{
	int input, cr, vay[101][101], i=0, j=0, cnt=1, p, turn=0;
	scanf ("%d", &input);
	cr= input;
	while (cnt < input*input+1) {
		for(i; i<cr; i++) {
			vay[j][i] = cnt++;
		}
		i--;
		j++;
		for(j; j<cr; j++) {
			vay[j][i] = cnt++;
		}
		j--;
		i--;
		cr--;
		for (i; i>=turn; i--) {
			vay[j][i]=cnt++;
		}
		i++;
		
		turn++;
		j--;
		for (j; j>=turn; j--) {
			vay[j][i]=cnt++;
		}
		j++;
		i++;
	}
	for (int i=0; i<input; i++) {
		for (int j=0; j<input; j++) {
			printf ("%d ", vay[i][j]);
		}
		printf ("\n");
	}
}
