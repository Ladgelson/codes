#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,par(0),impar(0),aux;
    cin >> n;
    while(n--){
        cin >> aux;
        if(aux%2 == 0)par++;
        else impar++;
    }
    cout << par << " " << impar << endl;
    return 0;
}
