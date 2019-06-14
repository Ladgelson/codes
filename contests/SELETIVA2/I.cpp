#include <bits/stdc++.h>
using namespace std;
#define INF 200000010
#define MAXN 550
#define f first
#define s second
#define pb push_back
#define ins insert
#define er erase
#define lsb(x) ((x) & (-x))

char grid[MAXN][MAXN];
int dist[MAXN][MAXN];
int seen[MAXN][MAXN];

int di[] = {0,0,1,-1};
int dj[] = {1,-1,0,0};

int n,m,maior=-1;

int naoDa(int i, int j){
    return i < 0 || i >= n || j < 0 || j >= m;
}

pair<int,int> ini;
pair <int,pair<int,int>>encontrar;

void dijkstra(int i, int j){

    priority_queue<pair<int, pair<int,int>> > pq;
    pq.push({0,{i,j} });
    dist[i][j] = 0;
    //cout << "aqui\n";
    while(!pq.empty()){
        //cout << "aqui1\n";
        auto u = pq.top().second;
        pq.pop();
        // cout << "aqui2\n";
        if(seen[u.f][u.s]) continue;
        //cout << "aqui3\n";
        seen[u.f][u.s] = 1;
        for(int w=0;w<4;++w){
            int ii = u.f + di[w];
            int jj = u.s + dj[w];
            //cout << "aqui\n";
            if(naoDa(ii,jj) || grid[ii][jj]=='#')continue;
            int d = dist[u.f][u.s];
            //cout << "aqui\n";
            if(dist[u.f][u.s] + 1 < dist[ii][jj]){
                dist[ii][jj] = dist[u.f][u.s] + 1;
                if(dist[ii][jj] > encontrar.f){
                    encontrar.s.f = ii;
                    encontrar.s.s = jj;
                    encontrar.f = dist[ii][jj];
                }
                pq.push({-dist[ii][jj], {ii,jj} });
            }
        }
    }
}

int main(){
    while(cin >> n >> m){
        if(!n && !m)break;
        encontrar.f = -1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                dist[i][j] = INF;
            }
        }
        memset(seen,0,sizeof seen);
        for(int i=0;i<n;++i){
            for(int j=0;j<m;j++){
                cin >> grid[i][j];
                if(grid[i][j] == '.'){
                    ini.f = i;
                    ini.s = j;
                }
            }
        }
        dijkstra(ini.f,ini.s);
        /*for(int i=0;i<n;++i){
            for(int j=0;j<m;j++){
                cout << dist[i][j] << " ";
            }
            cout << endl;
        }
        cout << "-----------" << endl;*/
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                dist[i][j] = INF;
            }
        }
        memset(seen,0,sizeof seen);
        encontrar.f = -1;
        dijkstra(encontrar.s.f,encontrar.s.s);
        /*for(int i=0;i<n;++i){
            for(int j=0;j<m;j++){
                cout << dist[i][j] << " ";
            }
            cout << endl;
        }
        cout << "-----------" << endl;*/
        cout << encontrar.f << endl;
    }
    return 0;
}

