#include <bits/stdc++.h>
using namespace std;
int n;
typedef struct tipo{
    int value;
    int visit;
}Vet;
/*4
4 1 2 10*/
int main(){
    cin >> n;
    Vet vet[n];
    for(int i = 0; i < n; i++){
        cin >> vet[i].value;
        vet[i].visit = 0;
    }
    int esquerda = 0;
    int direita = n-1;
    int cereja = 0;
    int dima = 0;
    for(int i = 0; i < n; i++){
        if(vet[direita].value>=vet[esquerda].value && i%2==0 && vet[direita].visit == 0){
            //cout << "1\n";
            cereja+=vet[direita].value;
            vet[direita].visit = 1;
            direita--;
        } else if(vet[direita].value>=vet[esquerda].value && i%2!=0 && vet[direita].visit == 0){
            dima+=vet[direita].value;
            vet[direita].visit = 1;
            direita--;
            //cout << "2\n";
        } else if(vet[esquerda].value>=vet[direita].value && i%2==0 && vet[esquerda].visit == 0){
            cereja+=vet[esquerda].value;
            vet[esquerda].visit = 1;
            esquerda++;
            //cout << "3\n";
        } else if(vet[esquerda].value>=vet[direita].value && i%2!=0 && vet[esquerda].visit == 0){
            dima+=vet[esquerda].value;
            vet[esquerda].visit = 1;
            esquerda++;
            //cout << "4\n";
        }
    }
    printf("%d %d\n",cereja,dima);
    return 0;
}




