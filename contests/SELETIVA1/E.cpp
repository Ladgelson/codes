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

int memo[1100][55];

int tamanho[MAXN], valor[MAXN];

const int INF = 0x3f3f3f3f;

int dp(int cara, int pesoRestanteDaBolsa){
    if(pesoRestanteDaBolsa < 0)return -INF;
    if(cara == n)return 0;
    if(memo[cara][pesoRestanteDaBolsa]!=-1)return memo[cara][pesoRestanteDaBolsa];
    return memo[cara][pesoRestanteDaBolsa] = max(dp(cara+1, pesoRestanteDaBolsa-tamanho[cara])+valor[cara],dp(cara+1, pesoRestanteDaBolsa));
}

int main(){
    int cont = 1;
    while(cin >> s >> n){
        if(!s && !n)break;
        memset(tamanho,-1,sizeof tamanho);
        memset(valor,-1,sizeof valor);
        for(int i=0; i < n;++i){
            cin >> tamanho[i] >> valor[i];
        }
        memset(memo,-1,sizeof memo);
        printf("Teste %d\n",cont);
        cout << dp(0,s) << endl;
        cout << endl;
        cont++;
    }
    return 0;
}



