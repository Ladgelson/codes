#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,b,i,j,k,num;

  do{
    cin >> n >> b;
    bool existe = false;
    int possible[n+1];
    int bolas[b];
    if(n!=0 and b!=0){
      //      vetor de bolas
      for(i = 0; i < b; i++)
        cin >> bolas[i];
      //      vettor de possibilidades
      for(i = 0; i <= n; i++)
        possible[i] = i;
      //      Analisando possibilidades
      for(i = 0; i < b; i++){
        for(j = 0; j < b; j++){
          num = bolas[i] - bolas[j];
          if(num < 0)
            num = -num;
          possible[num]=-2;
        }
      }
      for(i = 0; i < n+1; i++){
        if(possible[i] > -1)
          existe = true;
      }
        if(existe)
          cout << "N" << endl;
        else
          cout << "Y" << endl;
    }
  }while(n!=0 and b!=0);
  return 0;
}
