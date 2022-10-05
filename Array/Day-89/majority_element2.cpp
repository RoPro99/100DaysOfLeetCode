#include<bits/stdc++.h>
using namespace std;
void major(int *arr,int n){
	int ans[1000];
	for(int i=0;i<n;i++){
		int cnt=1;
		for(int j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				cnt++;
			}
			
			}
			if(cnt>n/3){
				ans[i]=arr[i];
		}
	}
	for(int i=0;i<n;i++){
		cout<<ans[i]<<" ";
	}
}
int main(){
	int n;
	cin>>n;
	int arr[1000];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	major(arr,n);

return 0;	
}