#include <bits/stdc++.h>
#define MAXN 6000
using namespace std;

typedef pair<int,int> pii;
int t;

int visited[10][10];
int dist[10][10];
pii ini,dest;

int di[] = {-2,-2,-1,1,2,2,1,-1};
int dj[] = {-1,1,2,2,1,-1,-2,-2};

bool fora(int i, int j){
    return i < 0 || i >= 8 || j < 0 || j >= 8;
}

void bfs(int i, int j) {

    queue<pii> bfsQueue;
    dist[i][j]= 0;
    visited[i][j] = 1;
    bfsQueue.push({i,j});
    while (!bfsQueue.empty()) {
        auto currentNode = bfsQueue.front();
        bfsQueue.pop();
        for(int w = 0; w < 8; ++w){
            int ki, kj;
            ki = currentNode.first + di[w];
            kj = currentNode.second + dj[w];
            if(fora(ki,kj) || visited[ki][kj])continue;
            visited[ki][kj]=1;
            dist[ki][kj] = dist[currentNode.first][currentNode.second]+1;
            bfsQueue.push({ki,kj});
        }
    }
}

pii ponto(string s){
    pii a;
    a.second =(s[0]-97);
    a.first = 8-(s[1]-48);
    return a;
}

int main(){
    cin >> t;
    while(t--){
        string a,b;
        cin >> a >> b;
        ini = ponto(a);
        dest = ponto(b);
        bfs(ini.first,ini.second);
        printf("%d\n",dist[dest.first][dest.second]);
        memset(visited,0,sizeof visited);
        memset(dist, -1, sizeof dist);
    }
    return 0;
}
