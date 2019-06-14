#include <bits/stdc++.h>
using namespace std;
#define MAXN 200100
#define f first
#define s second
#define pb push_back
#define ins insert
#define er erase
#define lsb(x) ((x) & (-x))

typedef long long ll;
typedef pair<int,int> pii;

string n;

bool div11(){
    int tam = n.size();
    int sump = 0,sumi = 0;
    for(int i=0;i<tam;++i)
        if(i%2==0)sump+=n[i]-48;
        else sumi+=n[i]-48;
    return (sump-sumi)%11 == 0;
}

int main(){
    cin >> n;
    cout << ( div11() ? "S\n":"N\n");
    return 0;
}




