#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, a, b, i;
  char k;
  cin >> n >> a >> k >> b;
  if(k == '+'){
    if(a+b<=n){
      cout << "OK\n";
    } else {
      cout << "OVERFLOW\n";
    }
  }
  if(k == '*'){
    if(a*b<=n){
      cout << "OK\n";
    }else {
      cout << "OVERFLOW\n";
    }
  }
  if(k == '-'){
    if(a-b<=n){
      cout << "OK\n";
    }else {
      cout << "OVERFLOW\n";
    }
  }
  if(k == '/'){
    if(a/b<=n){
      cout << "OK\n";
    }else {
      cout << "OVERFLOW\n";
    }
  }
  return 0;
}
