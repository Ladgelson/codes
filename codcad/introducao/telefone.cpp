#include <bits/stdc++.h>
using namespace std;

int main(){
  int i;
  string a;
  cin>>a;
  for(i=0;i<a.size();i++){
    if(a[i] >= 65 && a[i] < 68){
      cout << 2;
    }
    if(a[i] >= 68 && a[i] < 71){
      cout << 3;
    }
    if(a[i] >= 71 && a[i] < 74){
      cout << 4;
    }
    if(a[i] >= 74 && a[i] < 77){
      cout << 5;
    }
    if(a[i] >= 77 && a[i] < 80){
      cout << 6;
    }
    if(a[i] >= 80 && a[i] < 84){
      cout << 7;
    }
    if(a[i] >= 84 && a[i] < 87){
      cout << 8;
    }
    if(a[i] >= 87 && a[i] < 91){
      cout << 9;
    }
    if(a[i]<65 || a[i]>90){
      cout << a[i];
    }
  }
  cout << endl;
  return 0;
}
