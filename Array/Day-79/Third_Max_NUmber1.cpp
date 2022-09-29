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
int firs=arr[0];
for(int i=0;i<n;i++){
	if(arr[i]>firs){
		firs=arr[i];
	}
	
}
cout<<firs<<endl;
//Finding the second largest element
int second=INT_MIN;
for(int i=0;i<n;i++){
	if(arr[i]>second && arr[i]<firs){
		second = arr[i];
	}
}
cout<<second<<endl;

//finding the largest element 
int third=INT_MIN;
for(int i=0;i<n;i++){
	if(arr[i]>third && arr[i]<second){
		third=arr[i];
	}
}
cout<<third<<endl;

  
return 0;	
}