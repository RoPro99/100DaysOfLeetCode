#include<bits/stdc++.h>
using namespace std;
void findminimum(int *arr,int n){
	int min_prefix=0;
	int sum=0;
	for(int i=0;i<n;i++){
		sum += arr[i];
		min_prefix=min(min_prefix,sum);
		
	
	}
	cout<<1-(min_prefix)<<endl;
}
int main(){
	int n;
	cin>>n;
	int arr[1000];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	findminimum(arr,n);

return 0;	
}