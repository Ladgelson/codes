#include <bits/stdc++.h>
using namespace std;
#define MAXN 5100
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
    for(int i=0; i<12;i++){
        for(int j=0;j<12;j++){
            printf("%2d ",memo[i][j]);
        }
        cout << endl;
    }
    cout << "-----------" << endl;
}

int dp(int c, int p){
    if(p < 0)return -INF;
    if(p == 0)return 0;
    if(c == n)return 0;
    if(memo[c][p]!=-1)return memo[c][p];
    return memo[c][p] = max(qtd[c]+dp(c, p-tempo[c]),dp(c+1, p));
}

int main(){
    cin >> n>> t;
    for(int i=0; i < n;++i){
        cin >> tempo[i] >> qtd[i];
    }
    memset(memo,-1,sizeof memo);
    cout << dp(0,t) << endl;
    return 0;
}

