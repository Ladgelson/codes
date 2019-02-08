#include <bits/stdc++.h>
using namespace std;

int main(){
  double a,b;
  char k;
  cin >> k >> a >> b;
  if(k == 'M'){
    printf("%.2f\n",a*b);
  }  else if(k == 'D') {
    printf("%.2f\n",a/b);
  }
  return 0;
}
