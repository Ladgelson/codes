#include <bits/stdc++.h>
using namespace std;

int max(int a, int b){
    if(a>b)return a;
    else return b;
}
int main(){
    int n,i,l;
    cin >> n >> l;
    int vet[n];
    double maior=0;
    for(i=0;i<n;i++)
        cin >> vet[i];
    sort(vet,vet+n);
    int minimo = vet[0];
    int maximo = l-vet[n-1];
    for(int i=0; i<n-1;i++){
        if((vet[i+1]-vet[i])/2>maior){
            //cout << " " << (vet[i+1]-vet[i]) << endl;
            maior = (double)(vet[i+1]-vet[i])/2;
        }
    }
    //printf("%f , %d , %d\n",maior,maximo,minimo);
    double result = max(minimo,maximo);
    result = max(result,maior);
    printf("%.10f\n",result);
    return 0;
}


