#include <bits/stdc++.h>
using namespace std;

int n,i,j;

typedef struct casa{
    int valor,sinal;
}Casa;

typedef struct logica{
    int indice;
    int visitado;
}Logica;

int main() {
    while(cin >> n){
        if(n == 0)break;
        Casa vet[n];
        vector<Logica>positivos, negativos;
        // leio vetor
        for(i=0;i<n;i++){
            cin>>vet[i].valor;
            if(vet[i].valor < 0){
                negativos.push_back({i,0});
                vet[i].valor = -vet[i].valor;
                vet[i].sinal = 1;
            } else {
                positivos.push_back({i,0});
                vet[i].sinal = 0;
            }
        }
        int cont = 0;
        i = j = 0;
        // i indice do vetor de positivos
        // j indice do vetor de negtaivos
        while(i < positivos.size() || j < negativos.size()){
            int indMax = max(positivos[i].indice,negativos[j].indice);
            int indMin = min(positivos[i].indice,negativos[j].indice);
            int valor = min(vet[indMax].valor,vet[indMin].valor);
            vet[indMax].valor-=valor;
            vet[indMin].valor-=valor;
            if(vet[positivos[i].indice].valor==0 && vet[negativos[j].indice].valor==0){
                i++;
                j++;
            } else if(vet[positivos[i].indice].valor==0)i++;
            else if(vet[negativos[j].indice].valor==0)j++;
            cont+=valor*(indMax-indMin);
        }
        cout << cont << endl;
    }
    return 0;
}
