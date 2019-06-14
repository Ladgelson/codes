#include <bits/stdc++.h>
using namespace std;
int i,j,k=0;
string s;

int main(){
    cin >> s;
    stack<char>pilha;
    for(i=0;i<s.length(); i++){
        if(!pilha.empty() and pilha.top() == s[i]){
            pilha.pop();
            k++;
        } else {
            pilha.push(s[i]);
        }
    }
    if(k%2 == 0)cout << "No";
    else cout << "Yes";
    cout << endl;
    return 0;
}
