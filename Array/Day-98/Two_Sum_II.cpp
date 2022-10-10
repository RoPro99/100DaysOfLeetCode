#include<bits/stdc++.h>
using namespace std;
void twosum(int *arr,int n,int target){
	int v[2];
	int start=0;
	int end=n-1;
	while(start>0){
		int sum=arr[start]+arr[end];
		if(sum==target){
			v[0]=start+1;
			v[1]=end+1;
		}
		else if(sum>target){
			end--;
		}
		else{
			start++;
		}
		
		
	}
	cout<<v[0]<<","<<v[1];
	
}
int main(){
	int n;
	cin>>n;
	int arr[1000];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int target;
	cin>>target;
	
   twosum(arr,n,target);

return 0;	
}