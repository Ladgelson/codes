#include <bits/stdc++.h>
#define MAXN 10100
#define f first
#define s second
#define pb push_back
#define lsb(x) ((x) & (-x))
typedef long long ll;
using namespace std;

int n,t;

pair<int,string>par[MAXN];

int main(){
    cin >> n >> t;
    vector<set<string>>v;
    for(int i=0;i<n;++i)cin >> par[i].s >> par[i].f;
    sort(par,par+n,[](pair<int,string>a,pair<int,string>b){
        return a.f > b.f;
         });
    int j = 0;
    for(int i=0;i<n;i++){
        if(j > t-1)j=0;
        v[i].insert(par[i].s));
        j++;
    }

    for(int i=0;i<t;i++){
        cout << "Time " << i+1 << endl;
        for(set<int> :: iterator it = v[i].begin(); it != v[i].end();++it){
            cout << *it << endl;
        }
        cout << endl;

    }
    return 0;
}

