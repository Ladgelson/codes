#include <bits/stdc++.h>
using namespace std;

int cont = 0;

void collartz(int n){
    if(n == 1){
        // nada
    } else {
        if(n%2==0)n/=2;
        else n = (3*n)+1;
        cont++;
        collartz(n);
    }
}

int main(){
    int n;
    cin >> n;
    collartz(n);
    cout << cont << endl;
    return 0;
}
