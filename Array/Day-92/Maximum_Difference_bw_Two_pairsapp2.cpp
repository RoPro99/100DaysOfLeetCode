#include<bits/stdc++.h>
using namespace std;
int maxproduct(int *arr,int n){
	sort(arr,arr+n);
	
	return (arr[n - 1] * arr[n - 2] - arr[0] * arr[1]); 
}
int main(){
	int n;
	cin>>n;
	int arr[1000];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<maxproduct(arr,n)<<endl;

return 0;	
}