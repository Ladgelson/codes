#include <bits/stdc++.h>
using namespace std;

int main(){
    int rodadas,i,j,indiceDoFinal;
    int matriz[3][6] = {
        0,1,2,2,1,0,
        1,0,0,1,2,2,
        2,2,1,0,0,1
    };
    cin >> rodadas >> indiceDoFinal;
    rodadas%=6;
    for(i=0;i<3;i++){
        if(matriz[i][rodadas]==indiceDoFinal){
            cout << i << endl;
        }
    }
    return 0;
}