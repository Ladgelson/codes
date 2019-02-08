#include <bits/stdc++.h>
using namespace std;

int main(){
    int qtdPessoa,i,j,n, a,b;;
    cin >> qtdPessoa;
    map<pair<int,int>,string>aluno;
    while(qtdPessoa--){
        string nome;
        cin >> a >> b >> nome;
        aluno[make_pair(a,b)]=nome;
    }
    cin >> n;
    while(n--){
        cin >> a >> b;
        cout << aluno[make_pair(a,b)] << endl;
    }
    
    return 0;
}