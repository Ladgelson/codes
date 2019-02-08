#include <bits/stdc++.h>
using namespace std;

int main(){
  int a,b,c,d;
  cin >> a >> b >> c >> d;
  if((a==c && b!=d && d!=a) || (b==d && a!=c && c!=b)){
    cout << "V\n";
  } else {
    cout << "F\n";
  }
  return 0;
}
