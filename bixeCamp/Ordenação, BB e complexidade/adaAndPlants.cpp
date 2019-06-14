#include <bits/stdc++.h>
#define MAXN 100100
#define f first
#define s second
#define pb push_back
#define lsb(x) ((x) & (-x))
typedef long long ll;
using namespace std;
const int INF = 0x3f3f3f3f;
int t;

int main(){
    cin >> t;
    while(t--){
        map<int,int>maior, menor;
        int n,d;
        cin >> n >> d;
        int vet[n+10];
        for(int i=1;i<=n;i++){
            cin >> vet[i];
        }
        int i = 1, j = d+2;
        for(int k = i; k < j; k++){
            maior[vet[k]]++;
            menor[-vet[k]]++;
        }
        for(auto x : maior)cout << x.f << " " << x.s << endl;
            for(auto x : menor)cout << x.f << " " << x.s << endl;
        i++;
        j++;
        int ans = 0;
        map<int,int>::iterator it,it2;
        for(int k = i; k<j; ++k){

            maior[vet[k]]++;
            menor[-vet[k]]++;
            it = maior.begin();
            it2 = menor.begin();
            for(auto x : maior)cout << x.f << " " << x.s << endl;
            for(auto x : menor)cout << x.f << " " << x.s << endl;
            if(!menor[k])menor.erase(menor[k]);
            if(!maior[k])maior.erase(maior[k]);
            i++;
            ans=max(ans,it->f-(it2->f));
            cout << ans << endl;
        }
        cout << ans << endl;
    }
    return 0;
}

