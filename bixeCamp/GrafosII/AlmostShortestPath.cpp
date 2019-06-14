#include <bits/stdc++.h>
#define MAXN 100100
#define INF 99999999999
using namespace std;
typedef pair<int,int> pii;

int n,m,ini,fim;

vector<pii>adj[MAXN];

int seen[MAXN],ant[MAXN];

long long int dist[MAXN];

void dijkstra(int u){
    priority_queue<pii, vector<pii>,greater<pii>>pq;
    pq.push({0,u});
    dist[u] = 0;
    while(!pq.empty()){
        int no = pq.top().second;
        pq.pop();
        if(seen[no])continue;
        seen[no] = 1;
        for(auto par: adj[no]){
            int v = par.second;
            int d = par.first;
            if(dist[no]+d < dist[v]){
                dist[v] = dist[no]+d;
                ant[v]=no;
                pq.push({dist[v], v});
            }
        }
    }
}

void excluiMenorPath(int v){
    while(ant[v] != -1){
        dist[v] = INF;
        v = ant[v];
        cout << "Aqui";
    }
}

int main(){
    while(cin >> n >> m && n+m){
        cin >> ini >> fim;
        while(m--){
            int a, b, t;
            cin >> a >> b >> t;
            adj[a].push_back({t,b});
        }
        dijkstra(ini);
        excluiMenorPath(fim);
        memset(seen, 0, sizeof seen);
        dijkstra(ini);
        int resp = (dist[fim] >= INF ? -1: dist[fim]);
        cout << resp << endl;
    }
    return 0;
}


