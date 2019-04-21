#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m, aux(0),flag(0),indice(0);
    string assinatura, frase;
    cin >> n >> m >> frase >> assinatura;
    for(int i = 0; i < n;i++){
        if(frase[i] == assinatura[aux])aux++;
        else aux = 0;
        if(aux == m-1){
            flag = 1;
            indice = i;
        }
    }
    int max = n;
    for(int i = indice+1; i < max; i++){
        cout << frase[i];
        if(i==n-1){
            i=0;
            max=indice+1;
        }
    }
    return 0;
}

