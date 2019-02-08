#include <bits/stdc++.h>
using namespace std;
#define MAX 1000
int faz_isso(float a){
  if(a < 1.00){
    return 0;
  } else {
    return 1;
  }
}

int maior(int a, int b){
  return a>b ? a:b;
}

int main(){
  int m,n,i,j,bigger;
  float sum1,sum2,sum;
  cin >> m >> n;
  int x[MAX], y[MAX];
  for(i = 0; i < m; i++){
    cin >> x[i];
  }
  for(i = 0; i < n; i++){
    cin >> y[i];
  }
  bigger = maior(m,n);
  int z[bigger];
  sum = sum1 + sum2;
  //printf("sum1 = %f; sum2 = %f; sum = %f \n",sum1,sum2,sum);
  for (int i = bigger-1, c = 0; i >= 0; --i) {
    int v = x[i] + y[i] + c;
    //cout << "v = " << v << endl;
    z[i] = v % 2;
    //cout << "z[i] = " << z[i] << endl;
    c = v / 2;
    //cout << "c = " << c << endl;
  }
  int s = 0;
  for (int i = 0; i < bigger; i++) if (z[i]) s = i+1;

  for (int i = 0; i < s; i++) {
    if (i > 0) printf(" ");
    printf("%d", z[i]);
  }
  printf("\n");
  return 0;
}
