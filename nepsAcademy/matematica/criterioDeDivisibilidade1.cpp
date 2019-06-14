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

int por3(){
    int sum = 0;
    for(int i=0;i<n.size();++i){
        sum+=n[i]-48;
    }
    return sum;
}

int main(){
    cin >> n;
    cout << ((n[n.size()-1]-48)%2 == 0 ? "S\n":"N\n");
    cout << (por3()%3==0 ? "S\n":"N\n");
    cout << (((n[n.size()-1]-48) == 0 || (n[n.size()-1]-48) == 5) ? "S\n":"N\n");
    return 0;
}


