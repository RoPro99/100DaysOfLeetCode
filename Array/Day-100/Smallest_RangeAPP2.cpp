#include<bits/stdc++.h>
using namespace std;
int  smallrange(int *arr,int n,int k){
	int mx=INT_MIN;
	int mn=INT_MAX;
	for(int i=0;i<n;i++){
		mx=max(mx,arr[i]);
		mn=min(mn,arr[i]);
		
	}
	if(mn+k>mx-k){
		return 0;
	}
	return (mx-k)-(mn+k);
}
int main(){
	int n;
	cin>>n;
	int arr[1000];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int k;
	cin>>k;
	cout<<smallrange(arr,n,k)<<endl;

return 0;	
}