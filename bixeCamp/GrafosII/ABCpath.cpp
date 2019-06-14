#include <bits/stdc++.h>
#define MAXN 100
using namespace std;

int n,m;

int mapi[] = {-1,-1,-1,0,0,1,1,1};
int mapj[] = {-1,0,1,-1,1,-1,0,1};

bool fora(int i, int j){
    return i < 0 || i >= n || j < 0 || j >= m;
}

int dist[MAXN][MAXN];
char grid[MAXN][MAXN];

int bfs(int i, int j){
    int resp = 0;
    queue<pair<int,int>>fila;
    memset(dist, -1, sizeof dist);
    dist[i][j] = 1;
    fila.push({i,j});
    while(!fila.empty()){
        auto v = fila.front();
        fila.pop();
        i = v.first;
        j = v.second;
        //cout << "\n" << grid[i][j] << endl;
        resp = max(resp,dist[i][j]);
        for(int w = 0; w < 8; ++w){
            int ii = i + mapi[w];
            int jj = j + mapj[w];
            if(fora(ii,jj) || dist[ii][jj]!=-1){
                continue;
            }
            if(grid[i][j] + 1 != grid[ii][jj]){
                continue;
            }

            dist[ii][jj] = dist[i][j] + 1;
            fila.push({ii,jj});
        }
    }
    return resp;
}

int main(){
    int cont = 1;
    while(cin >> n >> m){
        if(n == 0 && m == 0)break;
        for(int i = 0; i < n;++i){
            for(int j = 0; j < m; ++j){
                cin >> grid[i][j];
            }
        }
        int resp = 0;
        for(int i = 0; i < n;++i){
            for(int j = 0; j < m; ++j){
                if(grid[i][j] == 'A'){
                    resp = max(resp, bfs(i,j));
                }
            }
        }
        printf("Case %d: %d\n",cont, resp);
        cont++;
    }
    return 0;
}
