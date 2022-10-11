#include<bits/stdc++.h>
using namespace std;
bool isonebit(int *arr,int n){
	bool one=true;
	for(int i=0;i<n;i++){
		one=true;
		if(arr[i]==1){
			one = false;
			i++;
		}
	}
	return one;
}
int main(){
	int n;
	cin>>n;
	int arr[1000];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	if(isonebit(arr,n)){
		cout<<"True"<<endl;
	}
	else{
		cout<<"False"<<endl;
	}
	

return 0;	
}