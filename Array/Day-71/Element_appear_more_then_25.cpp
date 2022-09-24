#include<bits/stdc++.h>
using namespace std;
int ele(int *arr,int n){
int a[100001]={0};
for(int i=0;i<n;i++){
a[arr[i]]++;
}
for(int i=0;i<100001;i++){
if(a[i]>(0.25*n)){
return i;
}
}
return -1;
}
int main(){
int n;
int arr[1000];
cin>>n;
for(int i=0;i<n;i++){
cin>>arr[i];
}
cout<<ele(arr,n)<<endl;

}

