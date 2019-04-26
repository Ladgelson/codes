#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
using namespace std;


int main(){
    int n,i;
    cin >> n;
    while(n--){
        int torta, convidado;
        cin >> torta >> convidado;
        double c(0);
        for(i = 0; i < torta; i++){
            int aux;
            cin >> aux;
            c += (aux*aux)*3.141592653589793238462643383279502884L;
        }

        printf("%.4f",c/(1+convidado));
        c = 0;
    }
    return 0;
}
