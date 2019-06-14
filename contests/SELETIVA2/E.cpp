#include <bits/stdc++.h>
using namespace std;
#define MAXN 100100
#define INF 200000010
#define f first
#define s second
#define pb push_back
#define ins insert
#define er erase
#define lsb(x) ((x) & (-x))

typedef long long ll;
typedef pair<int,int> pii;

int n;

int main(){
    while(cin >> n){
        if(!n)break;
        int k = 1,res=1;
        while(res <= n){
            res=k*k;
            if(res<=n)cout << res;
            if(!( (k+1)*(k+1) > n ))cout << " ";
            k++;
        }
        cout << endl;
    }
    return 0;
}

