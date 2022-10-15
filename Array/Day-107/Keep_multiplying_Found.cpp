#include<bits/stdc++.h>
using namespace std;
void originalnumber(int *arr,int n,int origional){
	
	int ans=0;
	for(int i=0;i<n;i++){
		if(arr[i]==origional){
			ans=arr[i]*2;
			origional=ans;
		}
		
	}
	cout<<origional<<endl;
	
}
int main(){
	int n;
	cin>>n;
	int arr[1000];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int origional;
	cin>>origional;
	originalnumber(arr,n,origional);
	

return 0;	
}