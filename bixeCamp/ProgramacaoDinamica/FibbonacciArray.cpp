#include <bits/stdc++.h>
#define MAXN 100
using namespace std;

long long n,mem[MAXN];

long long fibonacci(int k){
    if(mem[k]!=-1)return mem[k];
    if(k == 0)return 0;
    if(k == 1)return 1;
    mem[k] = fibonacci(k-1)+fibonacci(k-2);
    return mem[k];
}

int main(){
    memset(mem,-1,sizeof mem);
    cin >> n;
    for(int i = 0; i <= 65; i++){
        mem[i] = fibonacci(i);
    }
    while(n--){
        int a;
        cin >> a;
        cout << "Fib(" << a << ") = " << mem[a] << endl;
    }
    return 0;
}
