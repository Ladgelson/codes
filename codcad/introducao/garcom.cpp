#include <bits/stdc++.h>
using namespace std;

int main(){
  int a,b,i,n,sum(0);
  cin >> n;
  for(i=0;i<n;i++){
    cin >> a >> b;
    if(a > b){
      sum += b;
    }
  }
  cout << sum << endl;
  return 0;
}
