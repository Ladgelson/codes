#include <bits/stdc++.h>
using namespace std;
int emp,dep,i;
bool propina(int a, int b){
    if(a%dep == b%dep){
        int va =(a-(a%dep))/dep;
        int vb =(b-(b%dep))/dep;
        return va>vb;
    }
    return a%dep > b%dep;
}

int main(){
    
    cin >> emp >> dep;
    int vet[emp];
    for(i=0;i<emp;i++){
        cin >> vet[i];
/*         indice[i]= vet[i]%dep; */
    }
    sort(vet,vet+emp,propina);
    for(i=0;i<emp;i++)
        cout<< vet[i]<<" ";
    cout<<endl;
    
    return 0;
}