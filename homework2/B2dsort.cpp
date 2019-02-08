#include <bits/stdc++.h>
using namespace std;

int main(){
    int numDeCasos,i,j,numDePontos;
    scanf("%d",&numDeCasos);
    for(i=0;i<numDeCasos;i++){
        scanf("%d",&numDePontos);
        pair<int,int>ponto[numDePontos];
        for(j=0;j<numDePontos;j++){
            scanf("%d%d",&ponto[j].first, &ponto[j].second);
        }
        sort(ponto,ponto+numDePontos,[](pair<int,int>a,pair<int,int>b){
            if(a.first < b.first){
                return true;
            } else if(a.first == b.first){
                return a.second > b.second;
            } else {
                return false;
            }
        });
        for(j=0;j<numDePontos;j++){
            printf("%d %d\n",ponto[j].first, ponto[j].second);
        }
    }
    return 0;
}