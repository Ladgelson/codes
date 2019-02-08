#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,i,j;
    cin >> n;
    int matrix[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin >> matrix[i][j];
        }
    }
    int linha[n], coluna[n];
    for(i=0;i<n;i++){
        linha[i]=0;
        coluna[i]=0;
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            /* cout << matrix[i][j] << endl; */
            linha[i]+=matrix[i][j];
            coluna[j]+=matrix[i][j];
        }
    }
/* 
     linhas e colunas 
    cout << "Linha\n";
    for(i=0;i<n;i++){
        cout << linha[i] << " ";
    }
    cout << "\nColuna\n";
    for(i=0;i<n;i++){
        cout << coluna[i] << " ";
    }
    cout << endl; */
    int atual = 0,maior = 0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            atual = (linha[i]+coluna[j])-2*(matrix[i][j]);
            if(atual > maior)
                maior = atual;
        }
    }
    cout << maior << endl;
    return 0;
}