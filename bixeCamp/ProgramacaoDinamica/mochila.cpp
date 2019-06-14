#include <bits/stdc++.h>
#define MAXN 2020
#define f first
#define s second
#define pb push_back
#define lsb(x) ((x) & (-x))
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

int s,n;

int memo[MAXN][MAXN];

int tamanho[MAXN], valor[MAXN];

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

int dp(int cara, int pesoRestanteDaBolsa){
    if(pesoRestanteDaBolsa < 0)return -INF;
    if(cara == n)return 0;

    if(memo[cara][pesoRestanteDaBolsa]!=-1)return memo[cara][pesoRestanteDaBolsa];
    cout << cara << " " << pesoRestanteDaBolsa << endl;
    mostra();
    return memo[cara][pesoRestanteDaBolsa] = max(dp(cara+1, pesoRestanteDaBolsa-tamanho[cara])+valor[cara],dp(cara+1, pesoRestanteDaBolsa));
}

int main(){
    cin >> s >> n;
    for(int i=0; i < n;++i){
        cin >> tamanho[i] >> valor[i];
    }
    memset(memo,-1,sizeof memo);
    cout << dp(0,s) << endl;
    return 0;
}


