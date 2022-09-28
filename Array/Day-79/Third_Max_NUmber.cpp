#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int arr[1000];
for(int i=0;i<n;i++){
	cin>>arr[i];
}

//Find Maximum element in the arrray
int first=arr[0];
for(int i=0;i<n;i++){
	if(arr[i]>first){
		first=arr[i];
	}
	
}
cout<<first<<endl;
//Finding the second largest element
int second=arr[0];
for(int i=0;i<n;i++){
	if(arr[i]>second && first>arr[i]){
		second = arr[i];
	}
}
cout<<second<<endl;

//finding the largest element 
int third=arr[0];
for(int i=0;i<n;i++){
	if(arr[i]>third && second>arr[i]){
		third=arr[i];
	}
}
cout<<third<<endl;

  
return 0;	
}