#include<bits/stdc++.h>
using namespace std;
void mindistance(int *arr,int n,int target,int start){
	
	int ans=INT_MAX;
	for(int i=0;i<n;i++){
		if(arr[i]==target){
			ans=min(ans,abs(i-start));
			
		}
	}
	cout<<ans<<endl;
}
int main(){
	int n;
	cin>>n;
	int arr[1000];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int target,start;
	cin>>target>>start;
	mindistance(arr,n,target,start);

return 0;	
}