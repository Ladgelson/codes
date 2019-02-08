#include <bits/stdc++.h>
using namespace std;

int main(){
  int dim,i,j,valor(0),valor2(0);
  bool e = true;
  cin >> dim;
  int a[dim][dim];

  for(i=0;i<dim;i++){
    for(j=0;j<dim;j++){
      cin >> a[i][j];
    }
  }

  for(i=0;i<dim;i++){
    for(j=0;j<dim;j++){
        valor+=a[i][j];
    }
    if(i == 0){
      valor2=valor;
      valor=0;
    } else {
      if(valor != valor2 && e) e = false;
      valor = 0;
    }
  }
  for(i=0;i<dim;i++){
    for(j=0;j<dim;j++){
        valor+=a[j][i];
    }
    if(valor != valor2 && e) e = false;
    valor = 0;
  }
  for(i=0,j=0;i<dim;i++,j++){
    valor+=a[i][j];
  }
  if(valor != valor2 && e) e = false;
  valor = 0;
  for(i=0,j=dim-1;i<dim;i++,j--){
    valor+=a[i][j];
  }
  if(valor != valor2 && e) e = false;
  valor = 0;
  if(e){
    cout << valor2 << endl;
  } else {
    cout << -1 << endl;
  }
  return 0;
}
