#include <bits/stdc++.h>
#define MAXN 150
using namespace std;

int n,maior = 0,cont = 1;

pair<int,int>menor;

int visitado[MAXN],d[MAXN];

vector<int>adj[MAXN];

void dfs(int u){
    visitado[u] = 1;
    for(int v : adj[u]){
        if(!visitado[v]){
            d[v]=d[u]+1;
            if(d[v]>maior)maior=d[v];
            dfs(v);
        }
    }
}

int main(){
    while(cin >> n){
        if(n == 0)break;
        menor.first = MAXN+1000;
        menor.second = -1;
        for(int i = 0; i < n-1; ++i){
            int a, b;
            cin >> a >> b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        for(int i = 1; i <=n; ++i){
            memset(visitado,0,sizeof visitado);
            memset(d,0,sizeof d);
            maior = 0;
            dfs(i);
            //cout <<"Maior " << i<< " "<<maior << endl;
            if(maior < menor.first){
                //cout << "aqui\n";
                menor.first = maior;
                menor.second = i;
            }
        }
        for(int i = 1; i <= n; ++i){
            adj[i].clear();
        }
        printf("Teste %d\n%d\n\n",cont,menor.second);
        cont++;
    }
    return 0;
}

