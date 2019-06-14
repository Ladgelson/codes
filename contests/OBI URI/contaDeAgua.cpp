#include <bits/stdc++.h>
#define MAXN 10100
#define f first
#define s second
#define pb push_back
#define lsb(x) ((x) & (-x))
typedef long long ll;
using namespace std;

int n;

void s(int k){
    int cont = 7;
    for(int i=8;i<=k;++i){
        if(i>=11 && i<= 30)cont+=1;
        if(i>=31 && i<=100)cont+=2;
        if(i>=101)cont+=5;
    }
    cout << cont << endl;
}

int main(){
    cin >> n;
    s(n);
    return 0;
}

