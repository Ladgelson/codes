#include <bits/stdc++.h>
using namespace std;

int main(){
  int i,n;
  string gabarito, resposta;
  cin >> n >> gabarito >> resposta;
  int cont(0);
  for(i=0;i<n;i++){
    if(gabarito[i]==resposta[i]){
      cont++;
    }
  }
  cout << cont << endl;
  return 0;
}
