
#include <iostream>

using namespace std;

string title(string F){
	int i;
	for(i=0;i<F.size();i++){
		if(F[i] < 123 && F[i]>96){
			if(i==0){
				F[i]-=32;
			} else {
				if(F[i-1]==32){
					F[i]-=32;
				}
			}
		} else {
			if(F[i]!=32){
				if(i==0){
						
				} else if(F[i-1]!=32){
					F[i]+=32;
				}
			}
		}
	}
	return F;
}

int main(){
	string F;

	getline(cin, F);

	cout<<title(F)<<"\n";
	return 0;
}
