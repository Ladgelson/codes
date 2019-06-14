#include <bits/stdc++.h>
using namespace std;

int n,i,cont=0;

typedef struct bolsa{
    int tempo, quando;
}Bolsa;

int main(){
    cin >> n;
    Bolsa pedidos[n];
    for(i=0;i<n;i++)cin >> pedidos[i].tempo >> pedidos[i].quando;
    sort(pedidos,pedidos+n,[](Bolsa a, Bolsa b){
         return a.quando < b.quando;
    });
    int ini = 0,atraso = 0;
    for(i=0;i<n;i++){
        atraso=max(0,ini+pedidos[i].tempo-pedidos[i].quando);
        ini+=pedidos[i].tempo;
    }
    cout << atraso << endl;
    return 0;
}



