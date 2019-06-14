#include <bits/stdc++.h>
using namespace std;

int a, b;
int x;

void resolve(int k, int mais, int menos,int flag,int flag2){
    while(mais >= 0 && menos >= 0){
         int aux = k;
         for(int i = 0; i < k; i++){
            printf("%d ",flag);
            mais--;
         }
         if(menos > 0)printf("%d ", flag2);
         menos--;
    }
}
int main(){
    cin >> a >> b;
    int maxi, mini;
    maxi = max(a,b);
    mini = min(a,b);
    x = maxi/(mini+1);
    if(a > b)resolve(x,a,b,1,0);
    else resolve(x,b,a,0,1);
    return 0;
}

