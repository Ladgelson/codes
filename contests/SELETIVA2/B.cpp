#include <bits/stdc++.h>
using namespace std;
#define MAXN 50500
#define MAXM 200200
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


int main(){
    while(cin >> n >> m){
        if(!n && !m)break;
        int sum = 0;
        for(int i = 1;i <= m;i++){
            cin >> aresta[i].x >> aresta[i].y >> aresta[i].dis;
            sum+=aresta[i].dis;
        }
        for(int i = 1;i <= n;i++) pai[i] = i;
        sort(aresta+1, aresta+m+1, comp);
        int size = 0;
        for(int i = 1;i <= m;i++){
            if( find(aresta[i].x) != find(aresta[i].y) ){
                join(aresta[i].x, aresta[i].y);
                mst[++size] = aresta[i];
            }
        }
        int ans = 0;
        for(int i = 1;i < n;i++)ans+=mst[i].dis;
        cout << sum-ans << endl;
        memset(pai,0,sizeof pai);
        memset(peso,0,sizeof peso);
        memset(mst,0,sizeof mst);
        memset(aresta,0,sizeof aresta);
    }
    return 0;
}
