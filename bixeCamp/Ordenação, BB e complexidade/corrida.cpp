#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,i,j;
    cin >> n >> m;
    pair<int,int> v[n];
    for(i=0;i<n;i++){
        int sum = 0;
        v[i].second = i;
        for(j=0;j<m;j++){
            int aux;
            cin >> aux;
            sum+=aux;
        }
        v[i].first=sum;
    }
    sort(v,v+n);
    for(i=0;i<3;i++)printf("%d\n",v[i].second+1);
    return 0;
}


