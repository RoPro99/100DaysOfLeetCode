#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
	
	int n;
	cin>>n;
	int arr[1000];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	for(int i=n-1;i>=0;i--){
		arr[i] = max(arr[i],arr[i+1]);
	}
	int t;
	cin>>t;
	while(t--){
	
	// int k=INT_MIN;
	int idx;
	cin>>idx;
	// for(int i=0;i<=idx;i++){
	// 	if(arr[i]>k){
	// 		k=arr[i];
	// 	}


	cout<<"Largest  "<<arr[idx]<<endl;
}
	return 0;
}















