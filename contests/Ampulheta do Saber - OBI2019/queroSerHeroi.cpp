#include <bits/stdc++.h>
#define MAXN 10100
#define f first
#define pb push_back
#define lsb(x) ((x) & (-x))
typedef long long ll;
using namespace std;

int n,k;
map<string,int>m;

bool bb(string x){
    if(m[x] == 1)return true;
    for(int i=0;i<x.size();++i){
        string aux = x;
        for(int j=0;j<26;++j){
            aux[i]= 97+j;
            if(m[aux] == 1)return true;
        }
    }
    return false;
}

int main(){
    string s;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> s;
        m[s]=1;
    }
    cin >> k;
    for(int i=0;i<k;i++){
        string aux;
        cin >> aux;
        cout << (bb(aux) ? "S\n":"N\n");
    }
    return 0;
}

