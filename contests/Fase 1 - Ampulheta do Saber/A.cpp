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

string s;
int n;

int main(){
    cin >> s >> n;
    if( ((s[s.size()-1]-48== 1 || s[s.size()-1]-48 == 2) && n == 1)
       || ((s[s.size()-1]-48== 3 || s[s.size()-1]-48 == 4) && n == 2)
       || ((s[s.size()-1]-48== 5 || s[s.size()-1]-48 == 6) && n == 3)
       || ((s[s.size()-1]-48== 7 || s[s.size()-1]-48 == 8) && n == 4)
       || ((s[s.size()-1]-48== 9 || s[s.size()-1]-48 == 0) && n == 5) )cout << "MULTADO\n";
        else cout << "NAO MULTADO\n";
    return 0;
}

