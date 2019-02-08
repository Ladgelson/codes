#include <bits/stdc++.h>
using namespace std;

int main(){
  int a,i,m(0);
  char k;
  cin >> a;
  for(i=0;i<a;i++){
    cin >> k;
    if(k == 'P'){
      m+=2;
    }
    if(k == 'C'){
      m+=2;
    }
    if(k == 'A'){
      m++;
    }
  }
  cout << m << endl;
  return 0;
}
