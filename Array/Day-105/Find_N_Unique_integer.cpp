#include<bits/stdc++.h>
using namespace std;
void uniquesumzero(int n){
	int arr[n];
	//for even
	if(n%2==0){
		for(int i=0;i<n;i=i+2){
			arr[i]=i+1;
			arr[i+1]=-(i+1);
			
		}
		
	}
	//for odd
	else{
		for(int i=0;i<n-1;i=i+2){
			arr[i]=i+1;
			arr[i+1]=-(i+1);
		}
		arr[n-1]=0;
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<",";
	}
}
int main(){
	int n;
	cin>>n;
	uniquesumzero(n);

return 0;	
}