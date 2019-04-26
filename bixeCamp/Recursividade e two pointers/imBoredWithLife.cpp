#include <bits/stdc++.h>
using namespace std;
int n,m;

int min(int a, int b){
    if(a < b)return a;
    else return b;
}

int fat(int x){
    if(x == 1)return 1;
    else return fat(x-1)*x;
}

int main(){
    int result;
    cin >> n >> m;
    result = min(n,m);
    cout << fat(result)<< endl;
    return 0;
}


