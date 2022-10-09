#include<bits/stdc++.h>
using namespace std;
bool validarray(int *arr,int n){
	if(n<3){
		return false;
	}
	int i=0;
	for(;i<n-1;i++){
		if(arr[i]>arr[i+1]){
			i++;
			break;
		}
		else if(arr[i]==arr[i+1]){
			return false;
		}
	}
	for(;i<n;i++){
		if(arr[i-1]<=arr[i]){
			return false;
		}
	}
	return true;
}
int main(){
	int n;
	cin>>n;
	int arr[1000];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	if(validarray(arr,n)){
		cout<<"True"<<endl;
	}
	else{
		cout<<"False"<<endl;
	}

return 0;	
}