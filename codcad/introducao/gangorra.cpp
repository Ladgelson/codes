#include <bits/stdc++.h>
using namespace std;

int main(){
  int a,b,c,d;
  cin >> a >> b >> c >> d;
  int q,w;
  q = a*b;
  w = c*d;
  if(q == w){
    cout << "0\n";
  } else {
    if(q > w){
      cout << "-1\n";
    }else{
      cout <<"1\n";
    }
  }

  return 0;
}
