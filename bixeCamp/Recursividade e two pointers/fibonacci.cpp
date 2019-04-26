#include <bits/stdc++.h>
using namespace std;

int valor = 0;

int fibonacci(int n){
    if(n == 1 || n == 0)return 1;
    else return fibonacci(n-1)+fibonacci(n-2);
}

int main(){
    int n;
    cin >> n;
    n = fibonacci(n);
    cout << n << endl;
    return 0;
}
