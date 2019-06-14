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
int g[MAXN][MAXN];
int v[MAXN];

bool dfs(int p, int c) {
    if (v[p] != -1)return v[p] == c; v[p] = c;
    for(int i=0; i < n; ++i) {
        if(g[p][i] == 0) if(!dfs(i, c^1))return false;
    } return true;
}

int main() {
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> g[i][j];
        }
    }
    bool a = true;
    memset(v,-1,sizeof v);
    for(int i = 0; i < n; ++i) {
        //cout << "Aqui\n";
        if(v[i] == -1){
            if ( !dfs(i, 0) ) {
                cout << "Fail!" << endl;
                a = false;
                break;
            }
        }
    }
    if(a)cout << "Bazinga!" << endl;
    return 0;
}
