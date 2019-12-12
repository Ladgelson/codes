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

int n;
int memo[MAXN];
pii p[MAXN];

int dif(int i){
    return p[i].s-p[i].f;
}

int solve(int k){
    if(memo[k] != -1)return memo[k];
    if(k == 0)return 0;
    int ans = -INF;
    for(int i = 1; i < n; i++){
        if(i != k){
            ans = max(ans, 1 + solve(n-dif(i)));
        }
    }
    return memo[n] = ans;
}

int main(){
    cin >> n;
    for(int i=0;i<n;++i){
        int a,b;
        cin >> a >> b;
        p.pb({a,b});
    }
    return 0;
}

