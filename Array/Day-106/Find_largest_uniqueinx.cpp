#include<bits/stdc++.h>
using namespace std;
int largestidx(int *arr,int n){
	int mx=INT_MIN;
	int mxidx;
	for(int i=0;i<n;i++){
		if(arr[i]>mx){
			mx=arr[i];
			mxidx=i;
		}
	
	
	}
	// cout<<"laregst "<<mx<<" at idx "<<mxidx;
	for(int i=0;i<n;i++){
		if(arr[i]!=mx && mx<2*arr[i]){
			return -1;
		}
	
	}
	return mxidx;
	
}
int main(){
	int n;
	cin>>n;
	int arr[1000];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<largestidx(arr,n);

return 0;	
}