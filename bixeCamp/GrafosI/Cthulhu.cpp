#include <bits/stdc++.h>
#define MAXN 110
using namespace std;

int n,m;

vector<int>adj[MAXN];

int visitado[MAXN];

void dfs(int u){
    visitado[u] = 1;
    for(int v : adj[u]){
        if(!visitado[v])dfs(v);
    }
}

int main(){
    memset(visitado,0,sizeof visitado);
    cin >> n >> m;
    for(int i = 0; i < m; ++i){
        int a,b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int conexo = 0;
    for(int i = 1;i<=n;++i){
        if(!visitado[i]){
            conexo++;
            dfs(i);
        }
    }
    if(conexo == 1 && n == m)cout << "FHTAGN!\n";
    else cout << "NO\n";
    return 0;
}
