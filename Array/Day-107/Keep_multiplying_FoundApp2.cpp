#include<bits/stdc++.h>
using namespace std;
void originalnumber(int *arr,int n,int origional){
	
	int i=0;
	while(i<n){
		if(origional==arr[i]){
			origional = origional *2;
			i=0;
		}
		else{
			i++;
		}
	}
	cout<<origional<<endl;
	
}
int main(){
	int n;
	cin>>n;
	int arr[1000];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int origional;
	cin>>origional;
	originalnumber(arr,n,origional);
	

return 0;	
}