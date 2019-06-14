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

int n;

bool isDivTwo(ll x){
    int k = (x%10);
    if(k==0 || k==2 || k==4 || k==6|| k==8)return true;
    else return false;
}

bool isDivThree(ll x){
    ll k = x;
    int sum = 0;
    while(k > 10){
        sum+=(k%10);
        k/=10;
    }
    sum+=k;
    if(sum%3==0)return true;
    else return false;
}

bool isDivFive(ll x){
    int k = (x%10);
    if(k==0 || k==5)return true;
    else return false;
}

int main(){
    cin >> n;
    for(int i=0;i<n;++i){
        int cont = 0;
        ll aux;
        cin >> aux;
        while(aux != 1){
            if(isDivTwo(aux))aux/=2;
            else if(isDivThree(aux))aux = (2*aux)/3;
            else if(isDivFive(aux))aux = (4*aux)/5;
            else {
                cont = -1;
                break;
            }
            cont++;
        }
        cout << cont << endl;
    }
    return 0;
}

