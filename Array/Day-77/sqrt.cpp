#include<bits/stdc++.h>
using namespace std;
int squareroot(int n){
	if(n==0||n==1){
		return n;
	}
	int i=1;
	int res=1;
	while(res<=n){
		i++;
		res=i*i;
	}
	return i-1;
	
}
int main(){
	int n;
	cin>>n;
	cout<<squareroot(n)<<endl;
}