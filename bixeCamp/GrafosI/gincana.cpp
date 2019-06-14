#include <bits/stdc++.h>
#define MAXN 1100
using namespace std;

int n,m,i;

int visitado[MAXN];

vector<int>adj[MAXN];

void dfs(int u){
    visitado[u]=1;
    for(int v : adj[u]){
        if(!visitado[v]){
            dfs(v);
        }
    }
}

int main(){
    memset(visitado,0,sizeof visitado);
    cin >> n >> m;
    while(m--){
        int a,b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int cont = 0;
    for(i=1;i<=n;i++){
        if(!visitado[i]){
            cont++;
            dfs(i);
        }
    }
    cout << cont << endl;
    return 0;
}
