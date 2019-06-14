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

int main(){
    cin >> n;
    while(n--){
        int t;
        cin >> t;
        map<int,int>m;
        for(int i=0;i<t;++i){
            int aux;
            cin >> aux;
            if(!isDivThree(aux)){
                m[aux]++;
            }
        }
        map<int,int>:: iterator it;
        int cont = 0;
        for(it = m.begin();it != m.end(); ++it){
            for(int i=0;i<it->second;++i){
                cont+=it->first;
                if(isDivThree(cont))
            }
        }
    }
    return 0;
}


