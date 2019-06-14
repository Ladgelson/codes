#include <bits/stdc++.h>
using namespace std;
#define MAXN 550
#define f first
#define s second
#define pb push_back
#define ins insert
#define er erase
#define lsb(x) ((x) & (-x))
typedef long long ll;
typedef pair<int,int> pii;
int n,t;
int pai[MAXN];
int peso[MAXN];
vector< pair<double,pii>>adj;
int find(int x){
    if(pai[x] == x) return x;
    return pai[x] = find(pai[x]);
}
void join(int a, int b){
    a= find(a);
    b = find(b);
    pai[a] = b;
}
double sum = 0;
void kruskal(){
    sum = 0;
    for(int i = 0;i < t;i++) pai[i] = i;
    sort(adj.begin(), adj.end());
    int size = 0;
    for(int i = 0;i < adj.size();i++){
        if( find(adj[i].s.f) != find(adj[i].s.s) ){
            join(adj[i].s.f, adj[i].s.s);
            sum+=adj[i].f;
        }
    }
}

double d(pii a, pii b){
    return sqrt( (a.f-b.f)*(a.f-b.f) + (a.s-b.s)*(a.s-b.s) );
}

int main(){
    cin >> n;
    while(n--){
        vector<pair<int,int>>par;
        cin >> t;
        for(int i=0;i<t;++i){
            int a,b;
            cin >> a >> b;
            par.pb({a,b});
        }
        for(int i=0;i<t;++i){
            for(int j=0;j<t;++j){
                if(i==j)continue;
                double dist = d(par[i],par[j]);
                adj.pb({ dist,{i,j} });
            }
        }
        kruskal();
        printf("%.2f\n",sum/100);
        memset(pai,0,sizeof pai);
        adj.clear();
    }
	return 0;
}
