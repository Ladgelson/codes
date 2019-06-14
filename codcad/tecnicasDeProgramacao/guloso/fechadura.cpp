#include <bits/stdc++.h>
using namespace std;

int n,m,i,cont=0;

int main(){
    cin >> n >> m;
    int vet[n];
    for(i=0;i<n;i++){
        cin >> vet[i];
    }
    for(i=0;i<n-1;i++){
        if(vet[i]==m)continue;
        if(vet[i]>m){
            cont+=vet[i]-m;
            vet[i+1]-=vet[i]-m;
            vet[i]-=vet[i]-m;
        } else {
            cont+=m-vet[i];
            vet[i+1]+=m-vet[i];
            vet[i]+=m-vet[i];
        }
    }
    cout << cont << endl;
    return 0;
}

