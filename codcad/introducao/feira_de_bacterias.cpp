#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,i,d,c,ind(0);
  double maior(0),atual(0);
  cin >> n;
  for(i=0;i<n;i++){
    cin >> d >> c;
    atual = c*log(d);
    if(atual > maior){
      maior = atual;
      ind = i;
    }
  }
  cout << ind << endl;
  return 0;
}