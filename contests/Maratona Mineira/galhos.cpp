#include <bits/stdc++.h>
#define MAXN 300100
#define f first
#define s second
#define pb push_back
#define lsb(x) ((x) & (-x))

typedef long long ll;

using namespace std;

int n,seen[MAXN],sec[MAXN],pai[MAXN];
set<int>adj[MAXN];

void dfs(int u,int segundo){
    seen[u] = 1;
    if(sec[u]==0)sec[u]=segundo;
    for(int v : adj[u]){
        if(!seen[v]){
            dfs(v,segundo);
        }
    }
}

void dfsPai(int u){
    seen[u] = 1;
    for(int v : adj[u]){
        if(!seen[v]){
            pai[v] = u;
            dfsPai(v);
        }
    }
}

int main(){
    memset(seen,0,sizeof seen);
    memset(sec,0,sizeof sec);
    memset(pai,0,sizeof pai);
    cin >> n;
    for(int i = 1; i <= n; ++i){
        int a;
        cin >> a;
        if(a == -1)a = 0;
        adj[a].insert(i);
        adj[i].insert(a);
    }
    dfsPai(0);
    memset(seen,0,sizeof seen);
    for(int i = 1; i <= n; ++i){
        int a;
        cin >> a;
        adj[a].erase(pai[a]);
        dfs(a,i);
    }
    for(int i = 1; i <=n; ++i){
        if(i == n)cout << sec[i];
        else cout << sec[i] << " ";
    }
    cout << endl;
    return 0;
}

