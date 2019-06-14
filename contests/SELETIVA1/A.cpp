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

int n,a,b;

int main(){
    int k;
    cin >> n >> a >> b;
    if((a + b)%2 == 0)k=0;
    else k = 1;
    if(k == 0 && n == 0)cout << 0 << endl;
    if(k == 0 && n == 1)cout << 1 << endl;
    if(k == 1 && n == 0)cout << 1 << endl;
    if(k == 1 && n == 1)cout << 0 << endl;
    return 0;
}

