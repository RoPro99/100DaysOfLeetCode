#include<bits/stdc++.h>
using namespace std;
void binaryprefix(int *arr,int n){
	vector<int>v;
	bool res=false;
	for(int i=0;i<n;i++){
		if(arr[i]%5==0){
			res=true;
		}
		else{
			res=false;
		}
		v.push_back(res);
	}
	cout<<ans<<" ";
}
int main(){
	int n;
	cin>>n;
	int arr[1000];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	binaryprefix(arr,n);

return 0;	
}