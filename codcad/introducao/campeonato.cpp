#include <bits/stdc++.h>
using namespace std;

int main(){
  int f,f1,f2,c,c1,c2;
  int pc(0),pf(0);
  cin >> c >> c1 >> c2 >> f >> f1 >> f2;
  pc = (c*3)+(c1);
  pf = (f*3)+(f1);
  if(pc == pf){
    if(c2 == f2){
        cout << "=\n";
    } else {
      if(c2 > f2){
        cout << "C\n";
      } else {
        cout << "F\n";
      }
    }
  } else {
    if(pc > pf){
      cout << "C\n";
    } else {
      cout << "F\n";
    }
  }
  return 0;
}
