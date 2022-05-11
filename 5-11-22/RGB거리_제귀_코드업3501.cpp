#include <bits/stdc++.h>
int data1[16][3],dp[16][3]; //[n][i] n번쨰 호수를 i색으로 칠 했 을때 최소 값  
using namespace std;
int rgb(int n , int i){
	if(dp[n][i]) return dp[n][i];
	return dp[n][i] = min(rgb(n-1,(i+1)%3),rgb(n-1,(i+2)%3)) + data1[n][i];
}
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>data1[i][0]>>data1[i][1]>>data1[i][2];
	}
	dp[1][0] = data1[1][0];
	dp[1][1] = data1[1][1];
	dp[1][2] = data1[1][2];
	cout<<min(rgb(n,0),min(rgb(n,1),rgb(n,2)));
}
