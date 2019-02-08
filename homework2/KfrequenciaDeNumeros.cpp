#include <bits/stdc++.h>
using namespace std;
#define MAXN 100010

int main(){
    int n,i,aux,ant;
    cin >> n;
    multiset<int>valores;
    while(n--){
        scanf("%d",&aux);
        valores.insert(aux);
    }
    multiset <int> :: iterator itr; 
    for (itr = valores.begin(); itr != valores.end(); ++itr) { 
        if(*itr != ant)
            printf("%d aparece %d vez(es)\n",*itr,valores.count(*itr));
        ant = *itr;
    } 
    return 0;
}