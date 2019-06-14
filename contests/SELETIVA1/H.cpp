#include <bits/stdc++.h>
#define MAXN 550
using namespace std;

typedef pair<int,int> pii;
int n,m;

int grid[MAXN][MAXN];
int visited[MAXN][MAXN];
int dist[MAXN][MAXN];

bool fora(int i, int j){
    return i <= 0 || i > n || j <= 0 || j > m;
}

void bfs(int i, int j) {
    queue<pii> bfsQueue;
    dist[i][j]= 0;
    visited[i][j] = 1;
    bfsQueue.push({i,j});
    while (!bfsQueue.empty()) {
        auto currentNode = bfsQueue.front();
        bfsQueue.pop();
        for(int w = -2; w <= 2; ++w){
            for(int y= -2;y<=2;++y){
                if(y == 0 && w == 0)continue;
                int ki, kj;
                ki = currentNode.first + w;
                kj = currentNode.second + y;
                //printf("n %d %d \n",ki,kj);
                if(fora(ki,kj) || visited[ki][kj] || grid[ki][kj] == 0)continue;
                //printf("Passou %d %d \n",ki,kj);
                visited[ki][kj]=1;
                dist[ki][kj] = dist[currentNode.first][currentNode.second]+1;
                bfsQueue.push({ki,kj});
            }
        }
    }
}

int main(){
    memset(visited, 0, sizeof visited);
    memset(dist, -1, sizeof dist);
    cin >> n >> m;
    for(int i=1;i<=n;++i){
        for(int j=1;j<=m;++j){
            cin >> grid[i][j];
        }
    }
    bfs(1,1);
    cout << dist[n][m] << endl;
    return 0;
}

