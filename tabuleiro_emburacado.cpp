#include <bits/stdc++.h>
using namespace std;


int main(){
  int buracos[4][2];
  buracos[0][0]=1;
  buracos[0][1]=buracos[1][1]=3;
  buracos[1][0]=buracos[2][0]=2;
  buracos[2][1]=buracos[3][0]=5;
  buracos[3][1]=4;
  for(int i=0;i<4;i++)
    cout << buracos[i][0] << " " << buracos[i][1] << endl;
  int pos[2],n,i,cont(0);
  pos[0]=4;
  pos[1]=3;
  bool ok=true;
  cin >> n;
  int passos[n];
  for(i=0;i<n;i++){
    cin>>passos[i];
    if(passos[i] == 1){
      //cout << 1 << endl;
      pos[0]+=1;
      pos[1]+=2;
    } else if(passos[i] == 2){
      pos[0]+=2;
      pos[1]+=1;
      //cout << 2<< endl;
    } else if(passos[i] == 3){
      pos[0]+=2;
      pos[1]-=1;
      //cout << 3 << endl;
    } else if(passos[i]==4){
      pos[0]+=1;
      pos[1]-=2;
      //cout << 4 << endl;
    } else if(passos[i]==5){
      pos[0]-=1;
      pos[1]-=2;
      //cout << 5 << endl;
    } else if(passos[i]==6){
      pos[0]-=2;
      pos[1]-=1;
      //cout << 6 << endl;
    } else if(passos[i]==7){
      pos[0]-=2;
      pos[1]+=1;
      //cout << 7 << endl;
    } else if(passos[i]==8){
      pos[0]-=1;
      pos[1]+=2;
      //cout << 8 << endl;
    }
    for(int a=0;a<4;a++){
      if(ok){
        if(pos[0]==buracos[a][0] && pos[1]==buracos[a][1])
          ok=false;
        else
          ok=true;
      }
    }
    if(ok)
      cont++;
  }
  cout << cont+1 << endl;
  return 0;
}
