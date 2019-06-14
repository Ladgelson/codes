#include <bits/stdc++.h>
#define MAXN 100100
using namespace std;

int n,m,i;

set<int>adj[MAXN];

int main(){
    cin >> n >> m;
    for(i=0;i<m;i++){
        int t,a,b;
        cin >> t >> a >> b;
        if(t){
            adj[a].insert(b);
            adj[b].insert(a);
        } else {
            if(adj[a].count(b)){
                cout << 1 << endl;
            } else {
                cout << 0 << endl;
            }
        }
    }
    return 0;
}
