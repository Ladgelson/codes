#include <bits/stdc++.h>
using namespace std;
#define MAXN 100100
#define f first
#define s second
#define pb push_back
#define ins insert
#define er erase
#define lsb(x) ((x) & (-x))

typedef long long ll;
typedef pair<int,int> pii;

long long n;

ll ant = 1, antp = 1, aux = 0;

long long fibonacci(ll k){
    ll cont = 0;
    if(k == 0 || k == 1)return cont;
    while(aux <= k){
        aux = 0;
        aux += ant+antp;
        antp = ant;
        ant = aux;
        cont++;
    }
    return cont-1;
}

int main(){
    cin >> n;
    cout << fibonacci(n) << endl;

    return 0;
}

