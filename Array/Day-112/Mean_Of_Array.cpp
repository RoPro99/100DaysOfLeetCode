#include<bits/stdc++.h>
using namespace std;
void meanarray(int *arr,int n){
	double mx=INT_MIN;
	double mn=INT_MAX;
	double allsum=0;
	for(int i=0;i<n;i++){
		if(arr[i]>mx){
			mx=arr[i];
		}
		if(arr[i]<mn){
			mn=arr[i];
		}
		allsum += arr[i];
	}
	double ans=0;
	ans=(allsum-mx-mn)/(n-2);
	cout<<ans<<endl;
}
int main(){
	int n;
	cin>>n;
	int arr[1000];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	meanarray(arr,n);

return 0;	
}