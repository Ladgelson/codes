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
int vet[MAXN];

int main(){
    cin >> n;
    bool da = true;
    int cont = 0;
    for(int i=0;i<n;i++){
        cin >> vet[i];
    }
    int flag = 0;
    for(int i=0;i<n-1;){
        //cout << i << endl;
        if(i+2 < n && vet[i+2] == 1){
            cont++;
            i+=2;
        } else if(i+1 < n && vet[i+1] == 1){
            cont++;
            i++;
        } else {
            da = false;
            cout << -1 << endl;
            break;
        }

    }
    if(da)cout << cont << endl;
    return 0;
}

