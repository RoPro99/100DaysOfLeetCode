#include<bits/stdc++.h>
using namespace std;
void maximumproduct(int *arr,int n){
	vector<int>v;
	int product=0;
	sort(arr,arr+n);
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]<=arr[j]){
				product = arr[i]*arr[j];
			}
			v.push_back(product);
		}
	}
	for(int i=0;i<v.size();i++){
	 	cout<<v[i]<<" ,";
	 }
	//cout<<endl;
	int minn=INT_MAX;
	for(int i=0;i<n;i++){
		if(v[i]<minn){
			minn=v[i];
		}
	}
	//cout<<minn<<endl;
	int maxx=INT_MIN;
	for(int i=0;i<v.size();i++){
		if(v[i]>maxx){
			maxx=v[i];
		}
	}//cout<<endl;
	//cout<<maxx<<endl;
	
	cout<<(maxx-minn)<<endl;
}
int main(){
	int n;
	cin>>n;
	int arr[1000];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	maximumproduct(arr,n);

return 0;	
}