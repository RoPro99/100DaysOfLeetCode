#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int k;
	cin>>k;
	int sum=0;
	while(n>0){
		sum+=(n%k);
		n=n/k;
	}
	cout<<sum<<endl;

return 0;	
}