    #include <bits/stdc++.h>
    #define MAXN 250
    #define MAX 40100
    #define f first
    #define s second
    #define pb push_back
    #define lsb(x) ((x) & (-x))
    using namespace std;
    typedef long long ll;
    typedef pair<int,int> pii;

    int n,m;
    const int INF = 0x3f3f3f3f;
    int grid[MAXN][MAXN],seen[MAXN][MAXN];

    int di[] = {1,-1,0,0};
    int dj[] = {0,0,1,-1};

    bool naoDa(int i, int j){
        return i < 0 || i >=n || j < 0 || j>=m;
    }

    int aux = 0;

    void dfs(int i, int j){
        seen[i][j]= 1;
        aux++;
        for(int w=0;w<4;++w){
            int ii = i + di[w];
            int jj = j + dj[w];
            if(naoDa(ii,jj))continue;
            if(!seen[ii][jj] && grid[ii][jj]==grid[i][j])dfs(ii,jj);
        }
    }

    int main(){
        cin >> n >> m;
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                cin >> grid[i][j];
            }
        }
        int menor = INF;
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                if(seen[i][j])continue;
                aux = 0;
                dfs(i,j);
                menor = min(aux,menor);
            }
        }
        cout << menor << endl;
        return 0;
    }



