#include<bits/stdc++.h>
using namespace std;
void avgsalary(int *arr,int n){
	int mx=INT_MIN;
	for(int i=0;i<n;i++){
		mx=max(mx,arr[i]);
	}
	//cout<<mx<<endl;
	//cout<<endl;
	int mn=INT_MAX;
	for(int i=0;i<n;i++){
		mn=min(mn,arr[i]);
	}
	//cout<<mn<<endl;
	vector<int>ans;
	
	for(int i=0;i<n;i++){
		if(arr[i]<mx&& arr[i]>mn){
			ans.push_back(arr[i]);
		}
		
	}
	double avg=0;
		for(int i=0;i<ans.size()-1;i++){
		
		avg=(ans[i]+ans[i+1])/(n-2);
	}
	// int s=ans.size();
	// cout<<s<<endl;
	// int start=0;
	// int end=s-1;
	// while(start<=end){
	// 	avg=(ans[start]+ans[end])/s;
	// 	cout<<avg<<endl;
	// 	start++;
	// 	end--;
		
	// }
	
	cout<<avg<<endl;
	
}
int main(){
	int n;
	cin>>n;
	int arr[1000];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	avgsalary(arr,n);

return 0;	
}