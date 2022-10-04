#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int sum=0;
	while(n>0){
		int rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	cout<<sum<<endl;
	int add=0;
	while(sum>0){
		int remin=sum%10;
		add+=remin;
		sum=sum/10;
	}
	cout<<add<<endl;

return 0;	
}