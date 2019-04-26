#include <bits/stdc++.h>
using namespace std;

int maiorDivisorComum(int a, int b){
    if(b==0)return a;
    else return maiorDivisorComum(b,a%b);
}

int pour(int A, int B, int C) {
  int move = 1, a = A, b = 0, tfr;
  while (a != C && b != C) {
    tfr = min(a, B - b);
    b += tfr;
    a -= tfr;
    move++;
    // se encontrou
    if (a == C || b == C)
      break;
    if (a == 0) {
      a = A;
      move++;
    }
    if (b == B) {
      b = 0;
      move++;
    }
  }
  return move;
}

int main(){
    int n;
    cin >> n;
    int a,b,c;
    for(int i = 0; i < n; i++){
        cin >> a >> b >> c;
        if(c > b && c > a){
            cout << "-1";
        } else if(c % maiorDivisorComum(a,b) != 0){
            cout << "-1";
        } else if(c == a || c == b){
            cout << "1";
        } else {
            cout << min(pour(a,b,c),pour(b,a,c));
        }
        cout << endl;
    }
    return 0;
}


