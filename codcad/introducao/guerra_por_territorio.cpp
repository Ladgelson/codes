#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,i,j,esq(0),dir(0),total(0);
  cin >> n;
  int vet[n];
  for(i=0;i<n;i++){
    cin >> vet[i];
    total +=vet[i];
  }
  for(i=0;i<n;i++){
    if(i==0){
      esq = vet[i];
      dir = total - vet[i];
    } else {
      esq = esq + vet[i];
      dir = dir - vet[i];
    }
    if(dir == esq){
      cout << i+1 << endl;
    }
  }
  return 0;
}
