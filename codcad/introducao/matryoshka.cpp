#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,i,k;
  cin >> n;
  int bonecas[n],ordenado[n];
  for(i=0;i<n;i++){
    cin >> k;
    bonecas[i]=ordenado[i]=k;
  }
  sort(ordenado,ordenado+n);
  int qtd = 0;
  vector<int>x;
  for(i=0;i<n;i++){
    if(bonecas[i]!=ordenado[i]){
      qtd++;
      x.push_back(ordenado[i]);
    }
  }
  cout << qtd << endl;
  for(i=0;i<qtd;i++){
    if(i==0){
      cout << x[i];
    } else {
      cout << " " << x[i];
    }
  }
  cout << endl;
  return 0;
}
