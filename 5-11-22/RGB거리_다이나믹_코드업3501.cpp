#include <bits/stdc++.h>
int data1[16][3],dp[16][3]; //[n][i] n번쨰 호수를 i색으로 칠 했 을때 최소 값  
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>data1[i][0]>>data1[i][1]>>data1[i][2];
	}
	dp[0][0] = data1[0][0];
	dp[0][1] = data1[0][1];
	dp[0][2] = data1[0][2];
	
	for(int i=1;i<n;i++){
		for(int j=0;j<3;j++){
			dp[i][j] = min(dp[i-1][(j+2)%3],dp[i-1][(j+1)%3]) + data1[i][j];
		}
	}
	cout<<min(dp[n-1][0],min(dp[n-1][1],dp[n-1][2]));
}
