#include <bits/stdc++.h>
using namespace std;
#define MAXN 200100
#define f first
#define s second
#define pb push_back
#define ins insert
#define er erase
#define lsb(x) ((x) & (-x))

typedef long long ll;
typedef pair<int,int> pii;

int n, seen[MAXN];
pair<int,string>adj[MAXN];

void dfs(int u){
    seen[u] = 1;
    cout << adj[u].second;
    if(!seen[adj[u].first])dfs(adj[u].first);
}
int main(){
    memset(seen,0,sizeof seen);
    cin >> n;
    for(int i=0;i<n;++i){
        int a,b;
        string s;
        cin >> a >> s >> b;
        adj[a].first = b;
        adj[a].second = s;
    }
    dfs(0);
    cout << endl;
    return 0;
}

