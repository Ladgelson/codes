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

int soma(int s){
    int sum = 0;
    for(int i=0;s > 9;i++){
        int aux = (s%10);
        s/=10;
        sum+=aux;
    }
    sum+=s;
    return sum;
}

int main(){
    cin >> n;
    while(soma(n)%4 != 0){
        n++;
    }
    cout << n << endl;
    return 0;
}

