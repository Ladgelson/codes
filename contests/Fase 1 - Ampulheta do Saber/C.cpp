#include <bits/stdc++.h>
using namespace std;
#define MAXN 100100
#define f first
#define s second
#define pb push_back
#define ins insert
#define er erase
#define lsb(x) ((x) & (-x))

typedef long long ll;
typedef pair<int,int> pii;

int n,m;
ll k[MAXN];

int c = 100;

int bb(int ini, ll fim){
    int ans = 0,cont = 0;
    while(c--){
        ll meio = (ini+fim)/2;
        for(int i=0;i<n;i++){
            ll aux = k[i];
            while(aux-=meio && aux>0)cont++;
        }
        if(cont > n){
            ini = meio;
        }else if(cont < n){
            fim = meio;
        } else if(cont == n){
            return cont;
        }
    }
}

int main(){
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;++i){
        cin >> k[i];
    }
    int sum = 0;
    sort(k,k+n);
    int aux =
    cout << bb(0,100000) << endl;
    return 0;
}
