#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;

int dif(int x1, int x2, int y1, int y2){
  return sqrt(pow(x1-x2, 2) + pow(y1-y2,2));
}

int main(){
    //    DADOS
    int n, cipo, i, j;
    cin >> n >> cipo;
    int ok[n];
    vector<int> visitados[n];
    pii vet[n];
    int difAbsoluta;
    for(i=0;i<n;i++)
      cin >> vet[i].first >> vet[i].second;
    for(i=0;i<n;i++){
      ok[i] = 0;
      for(j=0;j<n;j++){
        if(i != j){
          difAbsoluta = dif(vet[i].first,vet[j].first,vet[i].second,vet[j].second);
          //cout << i << " " << j << endl;
          //cout << difAbsoluta << endl;
          if(difAbsoluta <= cipo){
            ok[i] = 1;
            visitados[i].pushback(j);
          }
        }
      }
    }
    bool a = true;
    for(i=0;i<n;i++){
      if(ok[i]==1){
        //blz
      }else{
        a = false;
      }
    }
    queue<int> vaidacerto;
    vaidacerto.push()
    while(!(vaidacerto.empty())){
      for(i=0;i<visitados[])
    }
    if(a){
      cout << "S\n";
    }else{
      cout << "N\n";
    }
    return 0;
}
