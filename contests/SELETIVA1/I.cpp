#include <bits/stdc++.h>
using namespace std;
#define MAXN 100100
#define f first
#define s second
#define pb push_back
#define ins insert
#define er erase
#define lsb(x) ((x) & (-x))

typedef long long ll;
typedef pair<int,int> pii;

int f,r;

int vet[MAXN];

int main(){
    bool v = true;
    memset(vet,0,sizeof vet);
    cin >> f >> r;
    vector<pair<int,int>>x;
    for(int i=1;i<=r;i++){
        int aux;
        cin >> aux;
        vet[aux] = 1;
        if(aux == 1)x.push_back({1,2});
        else if(aux == r)x.push_back({r-1,r});
        else x.push_back({aux-1,aux+1});
    }
    cout << "aquiu\n";

    int cont = 0;
    while(v){
        for(int i=0;i<r;i++){
            cout << "aquiu\n";
            if(x[i].f == 1){
                cout << "aquiu1\n";
                vet[x[i].s] = 1;
                if((x[i].s)+1 <=r)x[i].s++;
            } else if(x[i].s == r){
                cout << "aquiu2\n";
                vet[x[i].f] = 1;
                if((x[i].f)-1 >= 1)x[i].f--;
            } else {
                cout << "aquiu3\n";
                vet[x[i].f]=1;
                cout << "aquiu32we\n";
                vet[x[i].s]=1;
                if((x[i].f)-1 >= 1)x[i].f--;
                if((x[i].s)+1 <=r )x[i].s++;
            }
        }
        for(int i=1;i<=f;i++){
            if(vet[i] == 0){
                v = true;
                break;
            }
            if(v == true && i == f)
                v = false;

        }
        for(int i=1;i<f;i++)cout << vet[i] << " ";
        cout << endl;
        cont++;
    }
    cout << cont << endl;
    return 0;
}

