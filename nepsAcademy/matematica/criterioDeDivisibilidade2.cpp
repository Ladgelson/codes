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

bool div4(){
    int tam = n.size();
    if(tam >= 2){
        return ((((n[tam-2]-48)*10)+(n[tam-1]-48))%4 == 0);
    }
    return (n[0]%4 == 0);
}

bool div9(){
    int tam = n.size();
    int cont = 0;
    for(int i=0;i<tam;++i)cont+=n[i]-48;
    return cont%9 == 0;
}

bool div25(){
    int t = n.size();
    if(t == 1 && n[0]-48 == 0)return true;
    else false;
    return (((((n[t-2]-48)*10)+(n[t-1]-48))%25 == 0));
}

int main(){
    cin >> n;
    cout << ( div4() ? "S\n":"N\n");
    cout << ( div9() ? "S\n":"N\n");
    cout << ( div25() ? "S\n":"N\n");
    return 0;
}



