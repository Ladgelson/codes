#include <bits/stdc++.h>
#define MAXN 200200
using namespace std;

int n,m;

int cont = 0;

int visitado[MAXN];

vector<int>adj[MAXN];

bool cycle = true;
bool componente = true;

int ultimo;

void dfs(int u){
    visitado[u] = 1;
    for(int v : adj[u]){
        if(!visitado[v]){
            if(adj[v].size() != 2)cycle = false;
            else if(cycle)cycle = true;
            dfs(v);
        }
    }
    if(adj[u].size() == 0)cycle = false;
}

int main(){
    cin >> n >> m;
    for(int i = 1; i <= m; ++i){
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for(int i = 1; i <= n; ++i){
        if(visitado[i])continue;
        cycle = true;
        dfs(i);
        if(cycle == true)cont++;
    }
    cout << cont << endl;
    return 0;
}
