#include <bits/stdc++.h>
#define MAXN 100100
#define f first
#define s second
#define pb push_back
#define lsb(x) ((x) & (-x))
typedef long long ll;
using namespace std;

int n,seen[MAXN];
vector<int>adj[MAXN];

int min_corte = 1e9;

// conta quantidade de filhos para cada nó

int dfs(int u){
    seen[u]=1;
    int cnt = 1;
    for(int v : adj[u]){
        if(!seen[v]){
            int x = dfs(v);
            min_corte = min(min_corte,abs((n-x)-x));
            cnt+=x;
        }
    }
    return cnt;
}

int main(){
    memset(seen,0,sizeof seen);
    cin >> n;
    for(int i=1;i<n;++i){
        int a,b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int k = dfs(1);
    cout << min_corte << endl;
    return 0;
}

