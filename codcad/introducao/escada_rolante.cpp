#include <bits/stdc++.h>
using namespace std;

int main(){
  int i, n, a,ant, valor(0);
  cin >> n;
  for(i=0;i<n;i++){
    cin >> a;
    if(i==0){
      valor+=10;
      ant = a;
    } else {
      if(a <= ant+10){
        valor = valor + (a - ant);
        ant = a;
      } else {
        valor+=10;
        ant = a;
      }
    }
  }
  cout << valor << endl;
  return 0;
}
