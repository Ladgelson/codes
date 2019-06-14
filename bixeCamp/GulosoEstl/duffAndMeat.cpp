#include <bits/stdc++.h>
#define MAXN 100100
using namespace std;

int n,i,k=0;

priority_queue<int, vector<int>, greater<int>>melhorCompra;

int main()
{
    cin >> n;
    int meat, valor;
    cin >> meat >> valor;
    k+=(meat*valor);
    melhorCompra.push(valor);
    for(i=1;i<n;i++){
        cin >> meat >> valor;
        melhorCompra.push(valor);
        k+=melhorCompra.top()*meat;
    }
    cout << k << endl;
    return 0;
}
