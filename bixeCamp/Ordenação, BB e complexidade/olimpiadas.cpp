#include <bits/stdc++.h>
using namespace std;

typedef struct pais{
    int ouro, prata, bronze,indice;
}Pais;

int main(){
    int n,m,i;
    cin >> n >> m;
    Pais vetor[n];
    for(i=0;i<n;i++){
        vetor[i].indice = i+1;
        vetor[i].ouro = vetor[i].prata = vetor[i].bronze = 0;
    }
    for(i=0;i<m;i++){
        int ouro,prata,bronze;
        cin >> ouro >> prata >> bronze;
        vetor[ouro-1].ouro++;
        vetor[prata-1].prata++;
        vetor[bronze-1].bronze++;
    }
    sort(vetor,vetor+n,[](Pais a, Pais b){
         if(a.ouro == b.ouro){
            if(a.prata == b.prata){
                if(a.bronze == b.bronze){
                    return a.indice < b.indice;
                } else {
                    return a.bronze > b.bronze;
                }
            } else {
                return a.prata > b.prata;
            }
         } else {
            return a.ouro > b.ouro;
         }
    });
    for(i=0;i<n;i++)cout << vetor[i].indice << " ";
    cout << endl;
    return 0;
}
