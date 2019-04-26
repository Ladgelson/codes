#include <bits/stdc++.h>
using namespace std;

typedef struct consulta{
    int ini,fim;
}Consulta;

int n,i,livre(0),cont(0);

int main(){
    cin >> n;
    Consulta doDia[n];
    for(i = 0; i < n; i++){
        cin >> doDia[i].ini >> doDia[i].fim;
    }
    sort(doDia,doDia+n,[](Consulta a, Consulta b){
         return a.fim < b.fim;
    });
    for(i = 0; i < n; i++){
        if(doDia[i].ini >= livre){
            cont++;
            livre = doDia[i].fim;
        }
    }

    cout << cont << endl;
    return 0;
}
