#include <stdio.h>
#include <queue>

int M, N;
int vis[101][101];
int check[101][101];
char map[101][101];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

void BFS(int x, int y) {
    queue<pair<int, int>>q;
    visit[x][y] = 1;
    q.push(make_pair(x, y));
    while(!q.empty()) {
        int next_x = q.front().first;
        int next_y = q.front().second;
        q.pop();
        for(int i=0; i<4; i++) {
            if(0 <= next_x && next_x < N && 0 <= next_y && next_y <M) {
                if(map[next_x][next_y] == '1' && visit[next_x][next_y] == 0) {
                    check[next_x][next_y] = check[x][y] + 1;
                    visit[next_x][next_y] = 1;
                    q.push(make_pair(next_x, next_y));
                }
            }
        }
    }
}

int main() {
    scanf("%d %d", &N, &M);
    BFS(0, 0);
    printf("%d", check[N-1][M-1]+1);
}
