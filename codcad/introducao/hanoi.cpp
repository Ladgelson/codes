#include <bits/stdc++.h>
using namespace std;

int main(){
    int k,i;
    vector<int>valor;
    while(cin >> k){
        if(k==0)
            break;
        valor.push_back((pow(2,k))-1);
    }
    for(i=0;i<valor.size();i++){
        printf("Teste %d\n%d\n\n",i+1,valor[i]);
    }
    return 0;
}