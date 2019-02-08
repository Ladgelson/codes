#include <bits/stdc++.h>
using namespace std;

int main(){
  int m,n,i,j,cont=0;
  cin >> m >> n;
  char matriz[m][n];
  for(i=0;i<m;i++){
    for(j=0;j<n;j++){
      cin >> matriz[i][j];
    }
  }
  for(i=0;i<m;i++){
    for(j=0;j<n;j++){
      //cout << ((matriz[i][j] == '#') && (i+1 > m || i-1 < 0 || j+1 > n || j-1 < 0)) << " " << matriz[i][j] << endl;
      //cout << i+1 << " " << i-1 << " " << j+1 << " " << j-1 << endl;
      if(matriz[i][j] == '#'){
        if(i+1 >= m || i-1 < 0 || j+1 >= n ||j-1 < 0){
          //cout << (i+1 >= m) << " " << (i-1 < 0) << " " << (j+1 >= n) <<" "<< (j-1 < 0) << endl;
          cont++;
          //cout << "Aqui 1  Matriz[" << i <<"][" << j << "] = " << matriz[i][j] << "  qtd : "<< cont << endl;
        } else {
          //cout << (i+1 >= m) << " " << (i-1 < 0) << " " << (j+1 >= n) <<" "<< (j-1 < 0) << endl;
          if((matriz[i+1][j] != '#' || matriz[i-1][j] != '#' || matriz[i][j+1] != '#' || matriz[i][j-1] != '#'))
            cont++;
            //cout << "Aqui 2  Matriz[" << i <<"][" << j << "] = " << matriz[i][j] << "  qtd : "<< cont << endl;
        }
      }
    }
  }
  cout << cont << endl;
  return 0;
}
