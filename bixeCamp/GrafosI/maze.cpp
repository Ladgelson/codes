#include <bits/stdc++.h>
#define MAXN 600
using namespace std;

int n,m,k1=0,k,cont = 0,qtd = 0;
bool ok = true;
char matriz[MAXN][MAXN];
int visitado[MAXN][MAXN];

int di[] = {1, -1, 0, 0};
int dj[] = {0, 0, 1, -1};

bool fora(int i, int j){
    return i < 0 or i >= n or j < 0 or j >= m;
}

void dfs(int i, int j){
    if(qtd - k1 == k)return;
    visitado[i][j]=1;
    ++k1;
    //printf("ROTA %d %d \n",i,j);
    for(int w = 0; w < 4; ++w){
        //cout << "aqui\n";
        int ii = i + di[w];
        int jj = j + dj[w];
        if(fora(ii,jj) or matriz[ii][jj] != '.' or visitado[ii][jj])continue;
        dfs(ii,jj);
    }
}

int main(){
    cin >> n >> m >> k;
    int ki,kj;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> matriz[i][j];
            if(matriz[i][j]=='.'){
                qtd++;
                ki = i;
                kj = j;
            }
        }
    }
    //cout << "Inicio ... " << ki << " " << kj << endl;
    dfs(ki,kj);
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            if(matriz[i][j] == '.' && !visitado[i][j])matriz[i][j] = 'X';
        }
        cout << matriz[i] << endl;
    }
    return 0;
}
