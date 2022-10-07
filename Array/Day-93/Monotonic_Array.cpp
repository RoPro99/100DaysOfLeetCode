#include<bits/stdc++.h>
using namespace std;
bool monotonic(int *arr,int n){
  bool is_incresing=true;bool is_decresing=true;
  for(int i=0;i<n-1;i++){
  	if(arr[i]<arr[i+1]){
  		is_incresing=false;
  	}
  	if(arr[i]>arr[i+1]){
  		is_decresing=false;
  	}
  }    
  return is_incresing||is_decresing;
}
int main(){
	int n;
	cin>>n;
	int arr[1000];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	if(monotonic(arr,n)){
		cout<<"True"<<endl;
	}
	else{
		cout<<"False"<<endl;
	}

return 0;	
}