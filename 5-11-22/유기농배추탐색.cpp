#include <stdio.h>

int vis[51][51] = {0};
int arr[51][51] = {0};
int N, M, P;
int dx[4] = {1,-1, 0, 0};
int dy[4] = {0, 0, 1, -1};



void DFS(int y, int x) {
    int next_x, next_y;
    for(int o=0; o<4; o++) {
        next_x = dx[o]+x;
        next_y = dy[o]+y;
        if(next_x < 0 || next_x >=M || next_y <0 || next_y >=N) {
            continue ;
        }
        if(arr[next_y][next_x] && !vis[next_y][next_x]) {
            vis[next_y][next_x] = 1;
            DFS(next_y, next_x);
        }
    }
}

int main() {
    int x, y, T, cnt;
    scanf("%d", &T);
    while(T) {
        scanf("%d %d %d", &M, &N, &P);
        for(int i=0; i<N; i++) {
            for(int j=0; j<M; j++) {
                arr[i][j] = 0;
                vis[i][j] = 0;
            }
        }
        cnt = 0;
        for(int i=0; i<P; i++) {
            scanf("%d %d", &x, &y);
            arr[y][x] = 1;
        }
        for(int i=0; i<N; i++) {
            for(int j=0; j<M; j++) {
                if(arr[i][j] && !vis[i][j]) {
                    vis[i][j] = 1;
                    cnt+=1;
                    DFS(i, j);
                }
            }
        }
        printf("%d\n", cnt);
        T-=1;
    }
}
