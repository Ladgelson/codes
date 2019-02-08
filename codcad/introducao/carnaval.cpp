#include <bits/stdc++.h>
using namespace std;

int main(){
  float vetor[5],maior,menor;
  int i;
  for(i=0;i<5;i++)
    cin >> vetor[i];

  for(i=0;i<5;i++){
    if(i==0){
      maior = menor = vetor[i];
    } else {
      if(vetor[i]>maior){
        maior = vetor[i];
      }
      if(vetor[i]<menor){
        menor = vetor[i];
      }
    }
  }
  float sum(0);
  bool a,b;
  a = b = true;
  for(i=0;i<5;i++){
    if(vetor[i]==maior){
      if(a){
        a=false;
      } else {
        sum = sum + vetor[i];
      }
    } else if(vetor[i] == menor){
      if(b){
        b=false;
      } else {
        sum = sum+vetor[i];
      }
    } else {
      sum = sum + vetor[i];
    }
  }
  printf("%.1f",sum);
  return 0;
}
