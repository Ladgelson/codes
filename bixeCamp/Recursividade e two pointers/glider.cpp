#include <bits/stdc++.h>
using namespace std;

int max(int a, int b){
    if(a > b)return a;
    else return b;
}

int n, altura;

int main(){
    cin >> n >> altura;
    pair<int,int>vet[n];
    for(int i = 0; i < n; i++){
        cin >> vet[i].first >> vet[i].second;
    }
    int maiorDist = 0;
    for(int i = 0; i <= vet[n-1].second;i++){
        int alturaAtual = altura;
        int indiceDoPair = 0;
        int j = i;
        while(i > vet[indiceDoPair].second)indiceDoPair++;
        int inf = vet[indiceDoPair].first,sup=vet[indiceDoPair].second;
        if(inf < i)inf = i;
        cout << "Começando de " << j << endl;
        while(alturaAtual > 0){
            cout << j<<" " <<alturaAtual << " "<< inf<< " "<< sup<< endl;
            if(j < inf || j >= sup){
                alturaAtual--;
            }
            if(j >= inf){
                inf += (sup - inf);
                j+=(sup - inf);
            } else {
                j++;
            }
            if(inf > sup){
                if(indiceDoPair != n-1)indiceDoPair++;
                inf = vet[indiceDoPair].first,sup=vet[indiceDoPair].second;
            }
        }
        int distancia = j - i;
        printf("\ndistancia : %d\n",distancia);
        maiorDist = max(maiorDist,distancia);
    }
    cout << maiorDist << endl;
    return 0;
}
