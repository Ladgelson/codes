#include <bits/stdc++.h>
#define MAX 100100
using namespace std;

int n;
int visitado[MAX];
int d[MAX];
vector<int>adj[MAX];
pair<int,int>encontrar;

void dfs(int u){
    visitado[u] = 1;
    for(int v : adj[u]){
        if(!visitado[v]){
            d[v]=d[u]+1;
            if(d[v]>encontrar.second){
                encontrar.first = v;
                encontrar.second = d[v];
            }
            dfs(v);
        }
    }
}
/*

15
15 1
2 1
1 3
3 4
4 5
5 6
6 7
7 8
4 9
9 10
10 11
11 12
12 13
13 14
*/
int main(){
    encontrar.second = d[1] = 0;
    memset(visitado,0,sizeof visitado);
    cin >> n;
    for(int i = 0;i < n-1; ++i){
        int a,b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(1);
    memset(d,0,sizeof d);
    memset(visitado,0,sizeof visitado);
    dfs(encontrar.first);
    cout << encontrar.second << endl;
    return 0;
}
