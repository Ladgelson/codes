#include <bits/stdc++.h>
using namespace std;

bool comp(string a, string b){
  if(a == b)
    return false;
  else
   return true;
}

int main(){
  int i,cont(0);
  char d;
  string n;
  do{
    cin >> d >> n;
    cont = 0;
    bool dacerto = false, da = false;
    if(d != 48 and comp("0",n)){

      for(i=0;i<n.size();i++){
        if(n[i]!=d && n[i]!='0'){
          dacerto = true;
          printf("%c",n[i]);
        } else if(n[i]=='0' and dacerto){
          printf("%c",n[i]);
        } else {
          cont++;
        }
      }
      if(cont == n.size())cout << 0;
      cout << endl;
    }

  }while(d != 48 && comp("0",n));
  return 0;
}
