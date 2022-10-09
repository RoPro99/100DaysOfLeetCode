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
	int n=10;
	
	int arr[]={9,8,7,6,5,4,3,2,1,0};
	if(validarray(arr,n)){
		cout<<"True"<<endl;
	}
	else{
		cout<<"False"<<endl;
	}

return 0;	
}