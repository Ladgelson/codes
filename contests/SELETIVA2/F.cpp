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

int inverteMenor(int x){
    int aux = x;
    vector<int>numb;
    while(aux >= 10){
        numb.pb(aux%10);
        aux/=10;
    }
    numb.pb(aux%10);
    int valor = 0, sum = 0;
    for(int i=numb.size()-1,j=0;i>=0;--i,++j){
        if(numb[i]==0)continue;
        int pot = (j == 0 ? 1 : pow(10.0,j) );
        if( !(pot%10 == 0) && j!= 0)pot+=1;
        valor+= numb[i]*pot;
        sum +=valor;
    }
    return valor;
}

map<int,int>dist;

void bfs(int ini, int dest) {

    queue<int> bfsQueue;
    dist[ini]=0;
    bfsQueue.push(ini);
    while (!bfsQueue.empty()) {
        auto currentNode = bfsQueue.front();
        if(currentNode == dest)break;
        int node;
        bfsQueue.pop();
        int x = inverteMenor(currentNode);
        auto itr = dist.find(x);
        if(itr == dist.end()){
            node = x;
            dist[node]=dist[currentNode]+1;
            bfsQueue.push(node);
        }
        auto itr2 = dist.find(currentNode+1);
        if(itr2 == dist.end() ){
            node = currentNode+1;
            dist[node]=dist[currentNode]+1;
            bfsQueue.push(node);
        }
    }
}

int n;

int main(){
    cin >> n;
    while(n--){
        int a,b;
        cin >> a >> b;
        bfs(a,b);
        cout << dist[b] << endl;
        dist.clear();
    }
    return 0;
}

