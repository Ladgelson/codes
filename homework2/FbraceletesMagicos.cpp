#include <bits/stdc++.h>
using namespace std;

bool verifica(string &x, string &y){
    for(int i = 0, j; i < (int)y.size(); i++){
        if(y.substr(i,x.size()) == x){
            return true;
        }
    }
    return false;
} 

int main(){
    int casos,i,j,k = 0,y;
    string proibido, palavra;
    scanf("%d",&casos);
    for(i=0;i<casos;i++){
        cin >> proibido >> palavra;
        palavra+=palavra;
        
        if(verifica(proibido,palavra)){
            cout << "S\n";
        } else {
            reverse(begin(proibido),end(proibido));
            if(verifica(proibido,palavra)){
                cout << "S\n";
            } else {
                cout << "N\n";
            }
        }
    }
    return 0;
}