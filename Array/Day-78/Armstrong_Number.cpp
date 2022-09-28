#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int sum=0,copy=n;
	while(n>0){
		int rem=n%10;
		sum = sum + (rem*rem*rem);
		n/=10;
	}
	if(sum==copy){
		cout<<"True"<<endl;
	}
	else{
		cout<<"False"<<endl;
	}
	
return 0;	
}