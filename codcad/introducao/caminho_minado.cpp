#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,i;
  cin >> n;
  int vet[n],aux[n];
  for(i=0;i<n;i++){
    cin >> vet[i];
    aux[i]=0;
  }
  for(i=0;i<n;i++){
    if(i==0){
      if(vet[0]==1){
        aux[0]++;
        aux[1]++;
      }
    } else if(i==n-1){
      if(vet[i]==1){
        aux[i]++;
        aux[i-1]++;
      }
    } else if(vet[i]==1){
        aux[i]++;
        aux[i-1]++;
        aux[i+1]++;
      }
    }
  for(i=0;i<n;i++){
    cout << aux[i] << endl;
  }
  return 0;
}
