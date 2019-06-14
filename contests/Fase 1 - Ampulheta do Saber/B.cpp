#include <bits/stdc++.h>
using namespace std;
#define MAXN 10000100
#define f first
#define s second
#define pb push_back
#define ins insert
#define er erase
#define lsb(x) ((x) & (-x))

typedef long long ll;
typedef pair<int,int> pii;

int n,k;
ll grid[MAXN];

int main(){
    memset(grid,0,sizeof grid);
    scanf("%d %d",&n,&k);
    ll cont = 0;
    for(int i=0;i<n;++i){
        for(int j=0;j<k;++j){
            ll a;
            scanf("%d",&a);
            if(grid[a]==0)cont++;
            grid[a]=1;
        }
    }
    cout << cont <<endl;
    return 0;
}

