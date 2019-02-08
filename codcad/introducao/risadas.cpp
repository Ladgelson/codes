#include <bits/stdc++.h>
using namespace std;

bool anagrama(string a){
  string b = a;
  for(int i = 0,j=a.size()-1;i<a.size();i++,j--){
    if(!(a[i]==b[j]))
      return false;
  }
  return true;
}

int main(){
  int i;
  string a,vogais,sequencia;
  cin >> a;
  for(i=0;i<a.size();i++){
    if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')vogais+=a[i];
  }
  if(anagrama(vogais))
    cout << "S\n";
  else
    cout << "N\n";
  return 0;
}
