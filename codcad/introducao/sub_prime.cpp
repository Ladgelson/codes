#include <bits/stdc++.h>
using namespace std;

int main(){
  int i,j,b,n,c,d,v;
  do{
    cin >> b >> n;
    int vet[b];
    if(b!=0 && n!=0){
      for(i=0;i<b;i++){
        cin >> vet[i];
      }
      for(i=0;i<n;i++){
        cin >> c >> d >> v;
        vet[c-1]-=v;
        vet[d-1]+=v;
      }
      bool a = true;
      for(j=0;j<b;j++){
        if(vet[j]<0){
          cout << "N\n";
          a = false;
          break;
        }
      }
      if(a)
        cout << "S\n";
    }
  }while(b!=0 && n!=0);
  return 0;
}
