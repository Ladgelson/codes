#include <bits/stdc++.h>
#define MAXN 110
#define f first
#define s second
#define pb push_back
#define lsb(x) ((x) & (-x))
typedef long long ll;
using namespace std;

int n,m,q,cont(1);

int di[] = {0,0,-1,1};
int dj[] = {1,-1,0,0};

int naoDa(int i, int j){
    return i < 0 || i >= n || j < 0 || j >= m;
}

char grid[MAXN][MAXN];
int seen[MAXN][MAXN];

int dfs(int u, int v){
    seen[u][v] = 1;
    if(grid[u][v]=='#')cont=0;
    for(int w=0;w<4;++w){
        int ii = u + di[w];
        int jj = v + dj[w];
        if(naoDa(ii,jj))continue;
        if(grid[ii][jj] == '.')continue;
        if(!seen[ii][jj])dfs(ii,jj);
    }
    return cont;
}

int main(){
    memset(seen,0,sizeof seen);
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> grid[i][j];
        }
    }
    cin >> q;
    while(q--){
        int a,b;
        cin >> a >> b;
        if(grid[a][b]=='#')grid[a][b]='X';
    }
    int soma = 0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(grid[i][j] == '.' || seen[i][j])continue;
            cont = 1;
            cout << grid[i][j] << endl;
            soma+=dfs(i,j);
        }
    }
    cout << soma << endl;
    return 0;
}

