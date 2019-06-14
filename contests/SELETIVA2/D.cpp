#include <bits/stdc++.h>
using namespace std;
#define MAXN 35
#define f first
#define s second
#define pb push_back
#define lsb(x) ((x) & (-x))
typedef long long ll;
typedef pair<int,int> pii;

int n,t;

int memo[MAXN][MAXN];

int qtd[MAXN], tempo[MAXN];

const int INF = 0x3f3f3f3f;

void mostra(){
    for(int i=0; i<n;i++){
        for(int j=0;j<n;j++){
            printf("%2d ",memo[i][j]);
        }
        cout << endl;
    }
    cout << "-----------" << endl;
}

int dp(int c, int p){
    if(p < 0)return -INF;
    if(c == n)return 0;
    if(memo[c][p]!=-1)return memo[c][p];
    //mostra();
    return memo[c][p] = max(dp(c+1, p-qtd[c])+tempo[c],dp(c+1, p));
}

int main(){
    while(cin >> n){
        if(n == 0)break;
        cin >> t;
        for(int i=0; i < n;++i){
            cin >> tempo[i] >> qtd[i];
        }
        memset(memo,-1,sizeof memo);
        cout << dp(0,t) << " min."<< endl;
        memset(tempo,-1,sizeof tempo);
        memset(qtd,-1,sizeof qtd);
    }
    return 0;
}
