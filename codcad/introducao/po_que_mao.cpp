#include <bits/stdc++.h>
using namespace std;

int main(){
    int doce,e[3];
    cin >> doce >> e[0] >> e[1] >> e[2];
    sort(e,e+3);
    /*  */
    int i,cont=0;
    for(i=0;i<3;i++){
        if(doce - e[i] >= 0){
            doce-=e[i];
            cont++;
        }
    }
    cout<<cont << endl;
    return 0;
}