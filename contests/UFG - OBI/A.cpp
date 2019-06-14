#include <bits/stdc++.h>
using namespace std;

string a;

int main(){
    cin >> a;
    for(int i = 0; i < a.size(); i++){
        if(a[i] == 'z')a[i]='a';
        else a[i]++;
    }
    cout << a << endl;
    return 0;
}
