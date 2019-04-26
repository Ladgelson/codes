#include <bits/stdc++.h>
using namespace std;

int main(){
  int i,maior=0;
  while(cin >> i){
    if(i==0)break;
    if(i > maior)
      maior = i;
  }
  cout << maior << endl;
  return 0;
}
