#include <bits/stdc++.h>
using namespace std;

typedef struct pais{
    int ouro, prata, bronze, id;
}Pais;

bool melhor(Pais a, Pais b){
    if(a.ouro == b.ouro){
        if(a.prata == b.prata){
            if(a.bronze == b.bronze){
                return a.id < b.id;
            }
            return a.bronze > b.bronze;
        }
        return a.prata > b.prata;
    }
    return a.ouro > b.ouro;
}

int main(){
    int i,j,paises,modalidade, aux,o,p,b;
    cin >> paises >> modalidade;
    Pais pais[paises];
    for(i=0;i<paises;i++){
        pais[i].id = i+1;
        pais[i].ouro = pais[i].prata = pais[i].bronze = 0;
    }
    for(i=0;i<modalidade;i++){
        cin>>o>>p>>b;
        pais[o-1].ouro++;
        pais[p-1].prata++;
        pais[b-1].bronze++;
    }
    sort(pais,pais+paises,melhor);
    for(i=0;i<paises;i++){
        cout << pais[i].id << " ";
    }
    cout << endl;
    return 0;
}