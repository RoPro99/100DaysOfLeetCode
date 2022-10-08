#include<bits/stdc++.h>
using namespace std;
bool uglynumber(int n){
	if(n==1){
		return true;
	}
	int cnt=0;
	if(n%2==0){
		cnt++;
	}
	if(n%3==0){
		cnt++;
	}
	if(n%5==0){
		cnt++;
	}
	if(cnt<2){
		return false;
	}
	return true;
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