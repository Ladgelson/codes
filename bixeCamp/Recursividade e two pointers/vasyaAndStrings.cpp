#include <bits/stdc++.h>
using namespace std;
int n,k,i,j;
string palavra;

int max(int a, int b){
    if(a>b)return a;
    else return b;
}

int check(char x){
    int ret = 0, left, right = 0;
    int cont = 0;
    for(left=0;left<n;left++){
        while(right<n && (cont < k || palavra[right] != x)){
            if(palavra[right] == x)cont++;
            right++;
        }
        if(palavra[left] == x)cont--;
        if(ret < right-left)ret = right-left;
    }
    return ret;
}

int main(){
    cin >> n >> k >> palavra;
    int maior = check('a');
    maior = max(maior,check('b'));
    cout << maior << endl;
    return 0;
}

