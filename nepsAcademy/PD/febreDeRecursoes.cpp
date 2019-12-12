#include <bits/stdc++.h>
using namespace std;
#define MAXN 1100
#define INF 200000010
#define f first
#define s second
#define pb push_back
#define ins insert
#define er erase
#define lsb(x) ((x) & (-x))

typedef long long ll;
typedef pair<int,int> pii;

ll n,k,m;
ll memo[MAXN];
ll vet[MAXN];

ll pd(ll k){
    if(memo[k]!=-1)return memo[k];
    memo[k]=0;
    for(int i=1;i<=n;++i){
        memo[k]+=vet[i]*pd(k-i);
        memo[k]%=m;
    }
    return memo[k];
}

int main(){
    memset(memo,-1,sizeof memo);
    cin >> n >> k >> m;
    for(int i=1;i<=n;i++){
        cin >> vet[i];
    }
    for(int i=1;i<=n;i++){
        cin >> memo[i];
    }
    cout << pd(k)<< endl;
    return 0;
}

