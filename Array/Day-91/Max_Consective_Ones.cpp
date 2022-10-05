#include<bits/stdc++.h>
using namespace std;
int consectivesone(int *arr,int n){
	int maxx=0;
	int current_number_Of_ones=0;
	for(int i=0;i<n;i++){
		if(arr[i]==1){
			current_number_Of_ones +=1;
			maxx=max(maxx,current_number_Of_ones);
		}
		else{
			current_number_Of_ones =0;
		}
	}
	return maxx;
}
int main(){
	int n;
	cin>>n;
	int arr[1000];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<consectivesone(arr,n)<<endl;

return 0;	
}