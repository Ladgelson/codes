#include <bits/stdc++.h>
using namespace std;

int main(){
  int a,b,c;
  cin >> a >> b >> c;
  if( a == b && b == c){
    cout << "*\n";
  } else {
    if(a == b && c != b){
      cout << "C\n";
    }
    if(b == c && a != b){
      cout << "A\n";
    }
    if(a == c && b != a){
      cout << "B\n";
    }
  }
  return 0;
}
