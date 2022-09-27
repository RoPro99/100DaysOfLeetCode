#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
int arr[1000];
cin>>n;
for(int i=0;i<n;i++){
     cin>>arr[i];
}
sort(arr,arr+n);
   for(int i=0;i<n;i++){
          for(int j=i+1;j<n;j++){                                 
               if(arr[i]==arr[j]){
                    cout<<arr[i]<<" ";
                }
          }
     }
return 0;
}

 
