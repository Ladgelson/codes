#include <bits/stdc++.h>
using namespace std;

int main(){
    int participantes, voltas,aux,j,soma(0),i;
    cin >> participantes >> voltas;
    /* < soma dos tempos de um jogador , indice antigo > */
    pair<int,int>jogador[participantes];
    /* --------------------------- */
    for(i=0;i<participantes;i++){
        for(j=0;j<voltas;j++){
            cin >> aux;
            soma+=aux;
        }
        jogador[i].first=soma;
        jogador[i].second=i;
        soma=0;
    }
    sort(jogador,jogador+participantes);
    for(i=0;i<3;i++)
        cout << jogador[i].second+1 << endl;
    return 0;
}