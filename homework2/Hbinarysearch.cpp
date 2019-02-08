#include <bits/stdc++.h>
using namespace std;
#define MAXN 100010
int vet[MAXN];
int indice;
void binarySearch(int pesq, int ini, int fim){
    int aux=(ini+fim)/2;
    if(ini<=fim){
        if(vet[aux]==pesq){
            indice=aux;
            /* printf("pesq:%d,ini:%d,aux-1:%d\n",pesq,ini,aux); */
            binarySearch(pesq,ini,aux-1);
        }else if(vet[aux]>pesq){
            /* printf("pesq:%d,ini:%d,aux-1:%d\n",pesq,ini,aux); */
            binarySearch(pesq,ini, aux-1);
        }else if(vet[aux]<pesq){
            /* printf("pesq:%d,aux+1:%d,fim:%d\n",pesq,aux, fim); */
            binarySearch(pesq,aux+1, fim);
        }
    }
    
}

int main(){
    int n,k,i,pesq;
    cin >> n>>k;
    for(i=0;i<n;i++)
        scanf("%d",&vet[i]);
    for(i=0;i<k;i++){
        indice=-1;
        scanf("%d",&pesq);
        binarySearch(pesq, 0, n-1);
        printf("%d\n",indice);
    }
    return 0;
}