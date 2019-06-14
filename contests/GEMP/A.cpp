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

ll n;

bool isPrime(ll n){
    bool x = true;
    if(n == 2)return true;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            x = false;
        }
    }
    return x;
}

int main(){
    cin >> n;
    cout << ((!isPrime(n)) ? "S\n":"N\n");
    return 0;
}

