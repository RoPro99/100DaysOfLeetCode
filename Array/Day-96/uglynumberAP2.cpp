#include<bits/stdc++.h>
using namespace std;
bool uglynumber(int n){
	if(n<=0){
		return false;
	}
	while(n%2==0){
		n=n/2;
	}
	while(n%3==0){
		n=n/3;
	}
	while(n%5==0){
		n=n/5;
	}
	if(n==1){
		return true;
	}
	return false;

}
int main(){
	int n;
	cin>>n;
	if(uglynumber(n)){
		cout<<"True"<<endl;
		
	}
	else{
		cout<<"False"<<endl;
	}

return 0;	
}