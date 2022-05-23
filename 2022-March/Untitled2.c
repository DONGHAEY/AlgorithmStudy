#include <iostream>
#include <math.h>
#include <algorithm>
#include <queue>
#include <memory.h>
using namespace std;
typedef long long ll;
typedef double d;
typedef pair<d, d> pdd;
typedef pair<int,int> pii;

int n, m;
char buf[12][13];
int dp[12][1<<10]; //앉음 1, 빔 0
int tmp[11];
vector<string> v;
void dfs(int idx) {
	if (idx == m) {
		string str = "";
		for (int i = m-1; i > -1; i--) { // buf의 인덱스와 시프트 연산의 순서가 반대이므로 거꾸로
			if (tmp[i]) {
				str += "1";
			}
			else {
				str += "0";
			}
		}
		v.push_back(str);
		return;
	}
	tmp[idx] = 0;
	dfs(idx + 1);
	if (!idx || !tmp[idx - 1]) {
		tmp[idx] = 1;
		dfs(idx + 1);
	}
}
int recv(int line,int state) {
	if (line == n) {
		return 0;
	}
	int& ret = dp[line][state];
	if (~ret) return ret;
	ret = 0;
	for (auto nxt : v) {
		int _state = 0;
		int _flag = 1;
		int cnt = 0;
		for (int i = 0; i < m; i++) {
			if (nxt[i] == '1') {
				cnt += 1;
				if (buf[line][i] == 'x') { // 깨진 책상에 앉지 못하므로
					_flag = 0;
					break;
				}
				_state |= (1 << i);
				if (i > 0 && state & (1 << (i-1))){ // 이전에 내 대각선 왼쪽위로 앉음
					_flag = 0;
					break;
				}
				if (i < m && state & (1 << (i+1))) { // 이전에 내 대각선 오른쪽 위로 앉음
					_flag = 0;
					break;
				}
			}
		}
		if (_flag) {
			ret = max(ret, recv(line + 1, _state) + cnt);
		}
	}
	return ret;

}

void solve() {
	memset(dp, -1, sizeof(dp));
	memset(tmp, 0, sizeof(tmp));
	memset(buf, 'x', sizeof(buf)); 
	cin >> n >> m;
	v.clear();
	dfs(0);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> buf[i][j];
		}
	}
	cout << recv(0, 0) << "\n";
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t;
	cin >> t;
	for (; t--;) {
		solve();
	}
}
