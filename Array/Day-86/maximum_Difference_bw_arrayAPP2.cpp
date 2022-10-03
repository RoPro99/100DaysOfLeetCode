#include<bits/stdc++.h>
using namespace std;

int maxdiff(int *arr,int n){
	int ans=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			ans=max(ans,arr[j]-arr[i]);
		}
	}
	if(ans==0){
		return -1;
	}
	return ans;
	
}
int main(){
	int n;
	cin>>n;
	int arr[1000];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<maxdiff(arr,n)<<endl;

return 0;
}

