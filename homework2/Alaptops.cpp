#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, i, j;
    bool a1,b1;
    a1 = b1 = false;
    cin >> n;
    int a[n],b[n];
    for(i=0;i<n;i++){
        cin >> a[i] >> b[i];
        if(a[i]<b[i]){
            /* cout << "1\n"; */
            a1 = true;
        } else if(a[i] > b[i]){
            /* cout << "2\n"; */
            b1 = true;
        }
    }
    if(a1 && b1)
        cout << "Happy Alex\n";
    else
        cout << "Poor Alex\n";
    return 0;
}