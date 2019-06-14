#include <bits/stdc++.h>
using namespace std;
#define N 1100

int main(){
	int n, k;
	pair<int , pair<int,int>>p1[N];
	cin >> n >> k;
	for(int i = 0; i < n; i++){
		cin >> p1[i].first >> p1[i].second.first>> p1[i].second.second;
	}
	sort(p1, p1 + n, [](pair<int, pair<int,int>>a, pair<int, pair<int,int>>b)
	{
		if(a.second.first == b.second.first){
            return a.second.second < b.second.second;
        } else {
            return a.second.first > b.second.first;
        }
	});
    //for(int i = 0; i < n; i++)cout << p1[i].first << " " << p1[i].second.first << " " << p1[i].second.second << endl;
	cout << p1[k-1].first << endl;


	return 0;
}
