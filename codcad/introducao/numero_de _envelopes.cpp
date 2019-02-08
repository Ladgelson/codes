#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,i,a,ant;
  cin >> n;
  for(i=0;i<n;i++){
      cin >> a;
      if(i==0)
        ant = a;
      else
        if(a < ant)
          ant = a;
  }
  cout << ant << endl;
  return 0;
}
