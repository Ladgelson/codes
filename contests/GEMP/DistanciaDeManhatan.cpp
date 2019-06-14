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

typedef struct ponto{
    int a,b;
}Ponto;

int dist(pii a, pii b){
  pii c;
  c.first = a.first - b.first;
  c.second = a.second - b.second;
  //cout << c.first*c.first + c.second*c.second << endl;
  return sqrt(c.first*c.first) + sqrt(c.second*c.second);
}

pii a, b;

int main(){
    cin >> a.f >> a.s >> b.f >> b.s;
    cout << (dist(a,b)) << endl;
    return 0;
}


