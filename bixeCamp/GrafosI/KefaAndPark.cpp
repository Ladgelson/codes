#include <bits/stdc++.h>
#define MAXN 100100
using namespace std;

int n,m;

vector<int>adj[MAXN];

int visitado[MAXN];

int d[MAXN];

int gato[MAXN];

int cont = 0;

void dfs(int u){
    visitado[u] = 1;
    for(int v : adj[u]){
        if(!visitado[v]){
            //printf("%d+%d\n",d[u],gato[v]);
            if(gato[v])d[v] = d[u]+gato[v];
            else d[v] = 0;
            if(d[v]>m)continue;
            if(adj[v].size() == 1 && d[v] <= m)cont++;
            dfs(v);
        }
    }
}

int main(){
    memset(visitado,0,sizeof visitado);
    memset(gato,0,sizeof gato);
    cin >> n >> m;
    for(int i = 1; i <=n; ++i){
        cin >> gato[i];
    }
    d[1] = gato[1];
    for(int i=1;i<n;i++){
        int a,b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(1);
    /*for(int i = 1; i <=n;++i)cout << d[i] << " ";
    cout << endl;
    for(int i = 1; i <=n;++i)cout << gato[i] << " ";
    cout << endl;*/
    cout << cont << endl;
    return 0;
}

/*
4 1
1 1 0 0
1 2
1 3
1 4
*/
