#include <cstdio>
#include <cstring>
#include <vector>
#include <queue>
using namespace std;
 
// 컨닝 가능한 다른 6개의 자리와의 행, 열 번호 차
const int roff[6] = {-1, 0, 1, -1, 0, 1};
const int coff[6] = {-1, -1, -1, 1, 1, 1};
 
int A, B;
vector<int> adj[50];
int Amatch[50], Bmatch[50];
bool visited[50];
 
// dfs를 통한 이분 매칭
bool DFS(int a){
    if(visited[a]) return false;
    visited[a] = true;
    for(int b: adj[a])
        if(Bmatch[b] == -1 || DFS(Bmatch[b])){
            Amatch[a] = b;
            Bmatch[b] = a;
            return true;
        }
    return false;
}
 
int main(){
    int T;
    scanf("%d", &T);
    for(int t=0; t<T; t++){
        int N, M, broken = 0;
        scanf("%d %d", &N, &M);
        // 지도를 입력받으면서 부서진 자리의 개수를 세 둠
        bool map[10][10];
        for(int i=0; i<N; i++){
            getchar();
            for(int j=0; j<M; j++)
                broken += map[i][j] = (getchar() == 'x');
        }
 
        // 편의를 위해 각 자리가 가지는 노드의 번호를 계산해 둠
        int nodeNum[10][10];
        A = B = 0;
        for(int i=0; i<N; i++)
            for(int j=0; j<M; j+=2){
                adj[A].clear();
                nodeNum[i][j] = A++;
            }
        for(int i=0; i<N; i++)
            for(int j=1; j<M; j+=2)
                nodeNum[i][j] = B++;
 
        // 컨닝이 가능한 빈 자리 쌍에 대해 A그룹에서 B그룹으로 가는 간선 추가
        for(int j=0; j<M; j+=2)
            for(int i=0; i<N; i++){
                if(map[i][j]) continue;
                for(int d=0; d<6; d++){
                    int ni = i + roff[d];
                    int nj = j + coff[d];
                    if(ni<0 || ni>=N || nj<0 || nj>=M || map[ni][nj]) continue;
                    adj[nodeNum[i][j]].push_back(nodeNum[ni][nj]);
                }
            }
 
        // 이분 매칭으로 맥스 플로우 구함
        int maxMatch = 0;
        memset(Amatch, -1, sizeof(Amatch));
        memset(Bmatch, -1, sizeof(Bmatch));
        for(int i=0; i<A; i++){
            memset(visited, 0, sizeof(visited));
            if(DFS(i)) maxMatch++;
        }
        // 빈 자리 개수에서 맥스 플로우를 빼면 정답
        printf("%d\n", N*M - broken - maxMatch);
    }
}


