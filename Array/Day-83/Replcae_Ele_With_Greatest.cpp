#include<bits/stdc++.h>
using namespace std;
void replacehigh(int *arr,int n){
	int maxx=-1;
	for(int i=n-1;i>=0;i--){
		int temp=max(maxx,arr[i]);
		//cout<<temp<<" ";
		arr[i]=maxx;
		maxx=temp;
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
}
int main(){
	int n;
	cin>>n;
	int arr[1000];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	replacehigh(arr,n);

return 0;	
}