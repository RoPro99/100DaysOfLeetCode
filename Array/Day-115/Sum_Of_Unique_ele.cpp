#include<bits/stdc++.h>
using namespace std;
void sumofele(int *arr,int n){
	int sum=0;
	for(int i=0;i<n;i++){
		int ans=0;
		for(int j=0;j<n;j++){
			if(arr[i]==arr[j]){
				ans++;
			}
		}
		if(ans<2){
			sum+=arr[i];
		}
	}
	cout<<sum<<endl;
}
int main(){
	int n;
	cin>>n;
	int arr[1000];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sumofele(arr,n);

return 0;	
}