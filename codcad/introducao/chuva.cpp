#include <bits/stdc++.h>
using namespace std;

int main(){
  int dim,i,j;
  cin >> dim;
  int a[dim][dim],b[dim][dim];
  for(i=0;i<dim;i++){
    for(j=0;j<dim;j++){
      cin >> a[i][j];
    }
  }
  for(i=0;i<dim;i++){
    for(j=0;j<dim;j++){
      cin >> b[i][j];
    }
  }
  for(i=0;i<dim;i++){
    for(j=0;j<dim;j++){
      a[i][j] += b[i][j];
      if(j == dim-1)
        cout << a[i][j];
      else
        cout << a[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
