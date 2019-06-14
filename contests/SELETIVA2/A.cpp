#include <bits/stdc++.h>
using namespace std;
#define MAXN 1000100
#define INF 999999999
#define f first
#define s second
#define pb push_back
#define ins insert
#define er erase
#define lsb(x) ((x) & (-x))

typedef long long ll;
typedef pair<int,int> pii;
int n,t;
int v[30];
int memo[MAXN];

// sei que voce vai ver pedro, ainda bem que voce
// me forçou a fazer cut ribbons, achei parecida;

int solve(int pos, int total){
    if(total%v[pos-1] == 0) return total/v[pos-1];
    memset(memo,999999,sizeof(memo));
    memo[0]=0;
    int x;
    for(int i = 0; i < pos; i++){
        x = v[i];
        for(int j=x;j<=total;++j)memo[j]=min(1 + memo[j-x],memo[j]);
    }
    return memo[total];
}

int main(){
    cin >> n;
    while(n--){
        int a,b;
        cin >> a >> b;
        for(int i=0;i<a;++i){
            cin >> v[i];
        }
        sort(v,v+a);
        cout <<solve(a,b) << endl;
        memset(v,-1,sizeof v);
    }
    return 0;
}

