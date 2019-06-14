#include <bits/stdc++.h>
#define MAXN 1000100
#define f first
#define s second
#define pb push_back
#define lsb(x) ((x) & (-x))

typedef long long ll;

using namespace std;

int n, m, cont(1);

int di[] = {0,0,1,-1};
int dj[] = {1,-1,0,0};

int seen[MAXN][MAXN];

bool daRuim(int i, int j){
    return i<0 || i>n || j < 0 || j > n;
}

ll result = 0;

void dfs(int i, int j){
    seen[i][j] = 1;
    for(int w = 0; w < 4; w++){
        int ii = i + di[w];
        int jj = j + dj[w];
        if(daRuim)continue;
        if(!seen[ii][jj]){
            cont++;
            dfs(ii,jj);
        }
        if(cont == 1)cont = 1;
        else if(cont == 2)cont = 3;
        else cont*=2;
        result += cont;
    }
}

int main(){
    cin >> n >> m;
    while(m--){
        int a, b;
        scanf("%d %d",&a,&b);
        seen[a][b] = 1;
    }
    long long soma = 0;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n;++j){
            if(!seen[i][j]){
                result = 0;
                cont = 1;
                dfs(i,j);
                soma += result;
            }
        }
    }
    cout << soma << endl;
    return 0;
}

