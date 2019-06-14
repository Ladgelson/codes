#include <bits/stdc++.h>
using namespace std;

int n,i;

bool solve = true;

int main(){
    cin >> n;
    int vet[n];
    for(i=0;i<n;i++){
        cin >> vet[n];
    }
    stack<int>lateral, principal;
    for(i=0;i<n-1;i++){
        if(vet[i]>vet[i+1]){
            if(principal.empty() || lateral.empty())lateral.push(vet[i]);
            else if(!principal.empty() || !lateral.empty()){
                if(lateral.top() > principal.top() && lateral.top() < vet[i]){
                    principal.push(lateral.top());
                    lateral.pop();
                    lateral.push(vet[i]);
                } else if(vet[i]>principal.top())lateral.push(vet[i]);
                else {
                    solve = false;
                    break;
                }
            }
        } else if(vet[i]<vet[i+1]){
            if(principal.empty() || lateral.empty())principal.push(vet[i]);
            else if(!principal.empty() || !lateral.empty()){
                if(lateral.top() > principal.top() && lateral.top() < vet[i]){
                    principal.push(lateral.top());
                    lateral.pop();
                    lateral.push(vet[i]);
                } else if(vet[i]>principal.top())lateral.push(vet[i]);
                else {
                    solve = false;
                    break;
                }
            }
        }
    }
    if(principal.size() == n)cout << "yes";
    else cout << "no";
    cout << endl;
    return 0;
}

