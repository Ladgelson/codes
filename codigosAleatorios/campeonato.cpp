#include <bits/stdc++.h>
using namespace std;

int conta(int v, int e){
  return (v*3)+e;
}

char max(int a, int b){
  if(a>b){
    return 'C';
  } else if(a<b){
    return 'F';
  } else {
    return '=';
  }
}

int main(){
  int Cvit, Cemp, Csald,Fvit, Femp, Fsald, i,totalF,totalC;
  cin >>Cvit>> Cemp>> Csald>>Fvit>> Femp>> Fsald;
  totalC = conta(Cvit,Cemp);
  totalF = conta(Fvit,Femp);
  if(totalC == totalF)
    cout << max(Csald,Fsald) << endl;
  else
    cout << max(totalC,totalF) << endl;
  return 0;
}
