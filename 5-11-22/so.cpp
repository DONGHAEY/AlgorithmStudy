#include <stdio.h>
#define MOD 1000000007
#define ll long long

int main() {
	ll n, k, s;
	scanf("%lld %lld", &n, &k);
	for(s=1;k; k=k/2) {
		if(k%2) s= (s*n) %MOD;
		n = (n*n) %MOD;
	}
	printf("%lld", s);
	return 0;
}
