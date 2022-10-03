#include<bits/stdc++.h>
using namespace std;
int reversepair(int *arr,int n){
	int cnt=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]>2*arr[j]){
				cnt++;
			}
		}
	}
	return cnt;
}
int main(){
	int n;
	cin>>n;
	int arr[1000];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<reversepair(arr,n)<<endl;

return 0;	
}