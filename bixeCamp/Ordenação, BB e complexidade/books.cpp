#include <bits/stdc++.h>
using namespace std;
#define MAXN 100010
int n,t,i;
int prefix_sum[MAXN];

int bb(int ini, int fim, int disInicio){
    int ans = -1;
    while(ini<=fim){
        int meio = (ini+fim)/2;
        int valor = prefix_sum[meio]-prefix_sum[disInicio];
        if(valor > t){
            fim = meio-1;
        } else {
            ini = meio+1;
            ans = meio;
        }
    }
    return ans;
}

int main(){
    cin >> n >> t;
    prefix_sum[0] = 0;
    for(i=1;i<=n;i++){
        int aux;
        cin >> aux;
        prefix_sum[i]=prefix_sum[i-1]+aux;
    }
    int ans = 0;
    for(i=1;i<=n;i++){
        int resposta = bb(i,n,i-1);
        if(resposta == -1)continue;
        ans = max(ans, resposta - i + 1);
    }

    cout << ans << endl;
    return 0;
}
