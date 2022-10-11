#include<bits/stdc++.h>
using namespace std;
void smallrange(int *arr,int n,int k){
	if(n==1){
		cout<<"0"<<endl;
	}
	int ans=0;
     vector<int>v;
	for(int i=0;i<n;i++){
		if(arr[i]<k){
			ans=arr[i]+k;
			v.push_back(ans);
			
		}
		else if(arr[i]>k){
			ans=arr[i]-k;
			v.push_back(ans);
		}
		
	}
  for(int i=0;i<n;i++){
  	cout<<v[i]<<' ';
  }
  int mx=INT_MIN;
  for(int i=0;i<v.size();i++){
           mx=max(mx,v[i]);
  }
  int mn=INT_MAX;
  for(int i=0;i<v.size();i++){
  	 mn=min(mn,v[i]);
  }
  
  cout<<(mx-mn)<<endl;
}
int main(){
	int n;
	cin>>n;
	int arr[1000];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int k;
	cin>>k;
	smallrange(arr,n,k);

return 0;	
}