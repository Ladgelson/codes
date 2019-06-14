#include <bits/stdc++.h>
#define MAXN 100100
#define f first
#define s second
#define pb push_back
#define lsb(x) ((x) & (-x))
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

int n;
int seen[MAXN],pai[MAXN],qtd[MAXN];
vector<int>adj[MAXN];

void dfs(int u){
    qtd[u]++;
    seen[u]=1;
    for(int v:adj[u]){
        if(!seen[v]){
            pai[v]=u;
            dfs(v);
        }
    }
}

int main(){
    memset(seen,0,sizeof seen);
    memset(pai,-1,sizeof pai);
    memset(qtd,0,sizeof qtd);
    cin >> n;
    for(int i=0;i<n;++i){
        int a,b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(0);

    return 0;
}



