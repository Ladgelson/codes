#include <bits/stdc++.h>
using namespace std;

int n,i,cont=0;
int vet[]={100,50,25,10,5,1};
int main(){
    cin >> n;
    int k = n;
    while(k != 0){
        for(i=0;vet[i]>k;i++);
        k-=vet[i];
        cont++;
    }
    cout << cont << endl;
    return 0;
}


