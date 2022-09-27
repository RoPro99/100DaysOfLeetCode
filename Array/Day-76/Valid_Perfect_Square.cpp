#include<bits/stdc++.h>
using namespace std;
bool square(int n){
	bool res=false;
	if(n==1){
		res=true;
	}
	for(int i=1;i<n;i++){
		int sqrt=i*i;
		if(n==sqrt){
			res=true;
		}
	}
	return res;
	
}
int main(){
	int n;
	cin>>n;
	if(square(n)){
		cout<<"True"<<endl;
	}
	else{
		cout<<"False"<<endl;
	}
	
	
}