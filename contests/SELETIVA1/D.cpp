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

int n,m;

int main(){
    int k,j;
    bool ok = false;
    cin >> n >> m;
    if(n%2 == 0 && m == n-1 || m%2 == 0 && n == m-1) {
        cout << "oitavas" << endl;
        ok = true;
    }
    if(n >= 5 && n <=8)k=2;
    if(n <= 4)k=1;
    if(n >= 9 && n <=12)k=3;
    if(n >=13)k=4;

    if(m >= 5 && m <=8)j=2;
    if(m <= 4)j=1;
    if(m >= 9 && m <=12)j=3;
    if(m >=13)j=4;
    if(k == j && !ok)cout << "quartas" << endl;
    if(j == 1 && k == 2 || j == 2 && k == 1) cout << "semifinal" << endl;
    if(j == 3 && k == 4 || j == 4 && k == 3) cout << "semifinal" << endl;
    if(k <= 2 && j >= 3 || j <= 2 && k >= 3 ) cout << "final" <<endl;
    return 0;
}

