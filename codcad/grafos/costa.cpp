#include <bits/stdc++.h>
#define MAXN 1100
#define f first
#define s second
#define pb push_back
#define lsb(x) ((x) & (-x))
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

int n,m,cont(0);
char grafo[MAXN][MAXN];
int seen[MAXN][MAXN];
int vizinho[MAXN][MAXN];

int di[] = {1,-1,0,0,-1,1,-1,1};
int dj[] = {0,0,1,-1,-1,1,1,-1};

bool naoDa(int i, int j){
    return i < 0 || i >=n || j < 0 || j>=m;
}

void bfs(int i, int j){
    queue<pair<int,int>>fila;
    fila.push({i,j});
    seen[i][j]=1;
    while(!fila.empty()){
        //cout << "Aqui\n";
        pair<int,int> v = fila.front();
        fila.pop();
        if(vizinho[v.f][v.s] == 4)continue;
        for(int w=0;w<8;++w){
            int ii = v.f + di[w];
            int jj = v.s + dj[w];
            if(naoDa(ii,jj)){
                continue;
            } else {
                if(grafo[ii][jj]== '#' && w < 4)vizinho[v.f][v.s]++;
            }
            if(!seen[ii][jj] && grafo[ii][jj]== '#'){
                seen[ii][jj] = 1;
                fila.push({ii,jj});
            }
        }
    }
}

void bfsNormal(int i, int j){
    queue<pair<int,int>>fila;
    fila.push({i,j});
    seen[i][j]=1;
    while(!fila.empty()){
        pair<int,int> v = fila.front();
        fila.pop();
        if(vizinho[v.f][v.s] != 4)cont++;
        for(int w=0;w<8;++w){
            int ii = v.f + di[w];
            int jj = v.s + dj[w];
            if(naoDa(ii,jj))continue;
            if(!seen[ii][jj] && grafo[ii][jj]== '#'){
                seen[ii][jj] = 1;
                fila.push({ii,jj});
            }
        }
    }
}

int main(){
    memset(seen,0,sizeof seen);
    memset(vizinho,0,sizeof vizinho);
    cin >> n >> m;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;j++)
            cin >> grafo[i][j];
    }
    for(int i = 0; i < n; i++){
        for(int j=0;j<m;j++)
            if(!seen[i][j] && grafo[i][j] == '#')bfs(i,j);
    }
    /*
    for(int i = 0; i < n; i++){
        for(int j=0;j<m;j++)
            printf("%d ",vizinho[i][j]);
        cout << endl;
    }*/
    memset(seen,0,sizeof seen);
    for(int i = 0; i < n; i++){
        for(int j=0;j<m;j++)
            if(!seen[i][j] && grafo[i][j] == '#'){
                //cout << "asiaudh\n";
                bfsNormal(i,j);
            }
    }
    cout << cont << endl;
    return 0;
}


