#include <bits/stdc++.h>
#define MAXN 1100
using namespace std;

int n,m,i,j,cont(1);

bool eh = false;

pair<int,int>inicio;

int matriz[MAXN][MAXN];

int visitado[MAXN][MAXN];

void dfs(int a, int b){

    visitado[a][b]=1;

    for(int i=0;i<4 && !eh ;i++){
        if(!(a+1 == n) && matriz[a+1][b]!=0 && !visitado[a+1][b]){
            //cout<<"desceu"<<endl;
            cont++;

            //visitado[a+1][b]=1;

            if(matriz[a+1][b]==3){
                eh = true;
                break;
            }
            dfs(a+1,b);
        } else if(!(a-1 < 0) && matriz[a-1][b]!=0 && !visitado[a-1][b]){
            //cout<<"subiu"<<endl;
            cont++;
            //visitado[a-1][b]=1;
            if(matriz[a-1][b]==3){
                eh = true;
                break;
            }
            dfs(a-1,b);
        } else if(!(b+1 == m) && matriz[a][b+1]!=0 && !visitado[a][b+1]){
            //cout<<">>"<<endl;
            cont++;
            //visitado[a][b+1]=1;
            if(matriz[a][b+1]==3){
                eh = true;
                break;
            }
            dfs(a,b+1);
        } else if(!(b-1 < 0) && matriz[a][b-1]!=0 && !visitado[a][b-1]){
            //cout<<"<<"<<endl;
            cont++;
            //visitado[a][b-1]=1;
            if(matriz[a][b-1]==3){
                eh = true;
                break;
            }
            dfs(a,b-1);
        }
        else {
            //cout<<"Decrementou no "<<a<<" "<<b<<endl;
            cont--;
            break;
        }
    }
}

int main(){
    memset(visitado,0,sizeof visitado);
    cin >> n >> m;
    for(i=0;i<n;i++){
        for(j = 0; j < m; j++){
            cin >> matriz[i][j];
            if(matriz[i][j]==2){
                inicio.first = i;
                inicio.second = j;
            }
        }
    }
    dfs(inicio.first,inicio.second);s
    cout << cont << endl;
    return 0;
}
