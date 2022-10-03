#include<bits/stdc++.h>
using namespace std;
int maxdiff(int *arr,int n){
	int minidx=INT_MAX;
	int ans=INT_MIN;
	for(int i=0;i<n;i++){
		minidx=min(arr[i],minidx);
		ans=max(ans,arr[i]-minidx);
	}if(ans==0){
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