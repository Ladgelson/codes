#include <bits/stdc++.h>
using namespace std;

int main(){
  int i,k=0,n,ant=0,dis=1,maior=1;
  cin >> n;
  for(i=0;i<n;++i){
    cin >> k;
    if(i==0){
      ant = k;
    } else {
      if(k == ant){
        dis++;
      } else {
        dis = 1;
      }
    }
    ant = k;
    if(dis>maior)
      maior = dis;
  }
  cout << maior << endl;
  return 0;
}
