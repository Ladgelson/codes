#include <bits/stdc++.h>
using namespace std;

int main(){
  int a,m(0),maior(0),aux;
  cin >> a;
  int vet[a];
  for(int i = 0; i < a;i++){
    cin >> vet[i];
    aux = vet[i];
    if(i == 0){
      m++;
      maior = m;
    } else {
      if(vet[i]==vet[i-1]){
        m++;
        if(maior < m){
          maior = m;
        }
      } else {
        m=1;
      }
    }
  }
  cout << maior << endl;
  return 0;
}
