#include <bits/stdc++.h>
#define MAXN 100100
using namespace std;

int n;

vector<int>lancheira[MAXN];

set<int>escolhido;

int binarySearchIndice(int indice ,int ini, int fim, int valor){
    int ans = -1;
    int meio;
    while(ini <= fim){
        meio = (ini+fim)/2;
        if(lancheira[indice][meio] < valor){
            ini = meio+1;
        } else if(lancheira[indice][meio] > valor){
            fim = meio-1;
        } else if(lancheira[indice][meio] == valor){
            return indice;
        }
    }
    return ans;
}

int binarySearch(int ini, int fim, int valor){
    int ans = -1;
    int meio;
    //cout << "aqui5\n";
    while(ini <= fim){
        meio = (ini+fim)/2;
        //cout << "aqui6\n";
        //printf("lancheira[meio][0]= < valor=%d\n",valor);
        if(lancheira[meio][0] < valor){
            if(binarySearchIndice(meio, 0,lancheira[meio].size()-1,valor) != -1){
                //cout << "aqui4\n";
                escolhido.erase(meio);
                return meio;
            }
            //cout << "aqui7\n";
            ini = meio+1;
        } else if(lancheira[meio][0] > valor){
            //cout << "aqui3\n";
            fim = meio-1;
        } else if(lancheira[meio][0] == valor){
            //cout << "aqui2\n";
            return meio;
        }
    }
    set<int>::iterator it=escolhido.begin();
    int resp = *it;
    escolhido.erase(*it);
    //printf("RESP : %d \n",resp);
    return resp;
}

int main(){
    cin >> n;
    for(int i = 0; i <n; i++){
        int qtd;
        escolhido.insert(i);
        cin >> qtd;
        int a;
        for(int j = 0; j < qtd; j++){
            cin >> a;
            lancheira[i].push_back(a);
        }
    }
    //cout << "aqui1111\n";
    //printf("%d %d\n",n,lancheira[0].size());
    //cout << "aqui1\n";
    vector<int>ordem;
    for(int i = 0; i < n; i++){
        int x,k;
        cin >> x;
        k = binarySearch(0,n-1,x);
        ordem.push_back(k);
    }
    //cout << "aqui\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < lancheira[ordem[i]].size();j++){
            if(j == lancheira[ordem[i]].size()-1)printf("%d\n",lancheira[ordem[i]][j]);
            else printf("%d ",lancheira[ordem[i]][j]);
        }
    }
    return 0;
}

