#include <bits/stdc++.h>
using namespace std;
#define MAXN 10100
#define INF 200000010
#define f first
#define s second
#define pb push_back
#define ins insert
#define er erase
#define lsb(x) ((x) & (-x))
typedef long long ll;
typedef pair<int,int> pii;


struct t_aresta{
    int dis;
    int x, y;
};

bool comp(t_aresta a, t_aresta b){ return a.dis < b.dis; }

int n, m;
t_aresta aresta[MAXM];

int pai[MAXN];
int peso[MAXN];

t_aresta mst[MAXM];

int find(int x){
    if(pai[x] == x) return x;
    return pai[x] = find(pai[x]);
}

void join(int a, int b){
    a = find(a);
    b = find(b);
    if(peso[a] < peso[b]) pai[a] = b;
    else if(peso[b] < peso[a]) pai[b] = a;
    else{
        pai[a] = b;
        peso[b]++;
    }
}

int n,m;
vector<pair<int,int>>adj[MAXN];

int main(){
    cin >> n;
    while(n--){
        cin >> m;
        for(int i=0;i<m;++i){
            int a,b;
            cin >> a >> b;
        }
    }
    return 0;
}

