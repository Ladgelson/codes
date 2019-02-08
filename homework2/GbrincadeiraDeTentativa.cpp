#include <bits/stdc++.h>
using namespace std;
vector<int>permutation;
int n;
int chosen[8];
int vet[8];

void search() {
    if (permutation.size() == n) {
        /* print */
        for(int i = 0; i < permutation.size();i++)
            cout << permutation[i] << " ";
        cout << "\n\n";
    } else {
        for (int i = 0; i < n; i++) {
            if (chosen[i]) continue;
            chosen[i] = 1;
            permutation.push_back(vet[i]);
            search();
            chosen[i] = 0;
            permutation.pop_back();
        }
    }
}

int main(){
    int i;
    while(cin >> n){
        if(n == 0)break;
        memset(chosen,0, sizeof(chosen));
        memset(vet,0, sizeof(vet));
        for(i=0;i<n;i++){
            cin >> vet[i];
        }
        sort(vet,vet+n);
        search();
    }
    return 0;
}