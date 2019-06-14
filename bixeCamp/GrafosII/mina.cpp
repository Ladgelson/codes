#include <bits/stdc++.h>
#define MAXN 150
using namespace std;
typedef pair<int,int> pii;

int n;

int mapi[] = {0, 0, 1, -1};
int mapj[] = {1, -1, 0, 0};

bool fora(int i, int j){
    return i < 0 || i >= n || j < 0 || j >= n;
}

int dist[MAXN][MAXN];
int grid[MAXN][MAXN];

void bfs(int i, int j){
    deque<pair<int,int>>fila;
    dist[i][j] = 0;
    fila.push_back({i,j});
    while(!fila.empty()){
        auto v = fila.front();
        fila.pop_front();
        i = v.first;
        j = v.second;
        //printf("Posicao : %d %d \n",i,j);
        for(int w = 0; w < 4; ++w){
            int ii = i + mapi[w];
            int jj = j + mapj[w];
            if(fora(ii,jj) || dist[ii][jj] != -1){
                continue;
            }
            if(grid[ii][jj]){
                dist[ii][jj] = dist[i][j] + 1;
                fila.push_back({ii,jj});
            } else {
                dist[ii][jj] = dist[i][j];
                fila.push_front({ii,jj});
            }
        }
    }
}

int main(){
    memset(dist, -1, sizeof dist);
    cin >> n;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cin >> grid[i][j];
        }
    }
    bfs(0,0);
    cout << dist[n-1][n-1] << endl;
    return 0;
}

