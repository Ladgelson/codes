#include <bits/stdc++.h>

using namespace std;
int h, l;
int main()
{
  set<int> conj;

  int n;

  cin >> n;

  for(int i = 0; i < n; i++){
    int ni;
    cin >> ni;

    conj.insert(ni);
  }

  cout << conj.size() << endl;

  return 0;
}
