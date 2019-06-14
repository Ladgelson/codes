#include <bits/stdc++.h>
#define MAXN 100100
#define INF 99999999999
using namespace std;
typedef pair<int,int> pii;

int n,m;

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
            //cout << "aqui\n";
            if(dist[no]+d < dist[v]){
                dist[v] = dist[no]+d;
                ant[v]=no;
                pq.push({dist[v], v});
            }
        }
    }
}

int main(){
    cin >> n >> m;
    for(int i = 0; i < m; ++i){
        int a,b,c;
        cin >> a >> b >> c;
        adj[a].push_back({c,b});
        adj[b].push_back({c,a});
    }
    for(int i = 0; i <= n; i++){
        seen[i] = 0;
        dist[i]=INF;
        ant[i]=-1;
    }
    dijkstra(1);
    if(dist[n] == INF)cout << "-1\n";
    else {
        stack<int>resp;
        resp.push(n);
        int k = n;
        while(k != 1){
            resp.push(ant[k]);
            if(ant[k] == -1){
                resp.push(1);
                break;
            }
            k = ant[k];
        }
        while (!resp.empty()){
            if(resp.top() == 1)cout << resp.top();
            else cout << " " << resp.top();
            resp.pop();
        }
        cout << '\n';
    }
    return 0;
}

