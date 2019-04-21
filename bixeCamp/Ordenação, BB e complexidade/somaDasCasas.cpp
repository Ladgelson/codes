#include <bits/stdc++.h>
using namespace std;

int bb(int v[],int ini, int fim, int valor, int i){
    int meio;
    while(ini<=fim){
        meio = (ini+fim)/2;
        if(v[meio] + v[i] == valor){
            return meio;
        }else if(v[meio] + v[i] > valor){
            fim = meio-1;
        } else if(v[meio] + v[i] < valor){
            ini = meio+1;
        }
    }
    return -1;
}

int main(){
    int n,k;
    cin >> n;
    int v[n];
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    cin >> k;
    sort(v,v+n);
    for(int i =1;i<n;i++){
        int aux = bb(v,i,n,k,i-1);

        if(aux != -1){
            cout << v[i-1] << " " << v[aux] << endl;
            break;
        }
    }
    cout << endl;
    return 0;
}

