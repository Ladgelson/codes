#include <bits/stdc++.h>
using namespace std;

int main(){
  int o,p,b,o1,p1,b1;
  cin >> o>> p>> b>> o1>> p1>> b1;
  if(o == o1){
    if(p == p1){
      if(b > b1){
        cout << "A\n";
      } else {
        cout << "B\n";
      }
    } else {
      if(p > p1){
        cout << "A\n";
      } else {
        cout << "B\n";
      }
    }
  } else {
    if(o > o1){
      cout << "A\n";
    } else {
      cout << "B\n";
    }
  }
  return 0;
}
