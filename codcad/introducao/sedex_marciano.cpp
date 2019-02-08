#include <bits/stdc++.h>
using namespace std;

bool cabe(int a, int l, int p,int r){
  if(pow(a,2)+pow(l,2)+pow(p,2) <= 4*pow(r,2))
   return true;
  return false;
}

int main(){
  int a,l,p,r;
  cin >> a >> l >> p >> r;
  if(cabe(a,l,p,r))
    cout << "S\n";
  else
    cout << "N\n";
  return 0;
}
