#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
	int n,h1,h2,total=0;
	cin>>n;
	vector<int> arr;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		arr.push_back(x);
	}
	// copying the elements
	vector<int> prefix_max,suffix_max;
	for(int i=0;i<n;i++){
		prefix_max.push_back(arr[i]);
		suffix_max.push_back(arr[i]);
	}

	//Perform prefix max;
   for(int i=1;i<n;i++){
   	prefix_max[i]=max(prefix_max[i],prefix_max[i-1]);
   }
	// Perform suffix max;
   for(int i=n-2;i>=0;i--){
   	suffix_max[i]=max(suffix_max[i],suffix_max[i+1]);
   }
    //1 to n-1;
	// h1 = prefix_max[i-1]
	// h2 = suffix_max[i+1];
   for(int i=1;i<n-1;i++){
   	int h1=prefix_max[i-1];
   	int h2=suffix_max[i+1];


   	int decending_h=min(h1,h2);
   		if(decending_h>arr[i]){
   		 total =  total + (decending_h-arr[i]);
   	  }

   }

	//deciding_heigh = min(h1,h2)
   cout<<total<<endl;
	// if decid_heigh > arr[i]; total + = decid_he - arr[i];
 

	
	return 0;
}
