#include <iostream>

using namespace std;

bool eh_primo(int x){
	int i,r;
	for(i=1;i<=x;i++){
		if(x%i==0){
			r++;
		}
	}
	if(r == 2){
		return 1;
	} else {
		return 0;
	}

}

int main(){
	int x;

	cin>>x;

	if(eh_primo(x)){
		cout<<"S"<<"\n";
	}else{
		cout<<"N"<<"\n";
	}
}
