#include <bits/stdc++.h>
#define MAXN 600
using namespace std;

int n,m;

vector<int>adj[MAXN];

bool ok = true;

void dfs(int u){
    if(!ok)return;
    visitado[u]=1;
    for(int v : adj[u]){
        if(!visitado[v]){
            if(v == u+2 || v == u-2)ok = false;
            dfs(v);
        }
    }
}

int main(){
    cin >> n >> m;
    for(int i = 0; i < m; ++i){
        int a,b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    return 0;
}

