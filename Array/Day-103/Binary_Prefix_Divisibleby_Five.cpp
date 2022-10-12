#include<bits/stdc++.h>
using namespace std;
void binaryprefix(int *arr,int n){
	vector<bool> res;
        int num;
        
        for(int i = 0; i < n; ++i)
        {
            num = (num * 2 + arr[i]) % 5;
            res.push_back(num == 0);
         
        }
        for(int i=0;i<n;i++){
        	cout<<res[i]<<" ";
        }
        
}
int main(){
	int n;
	cin>>n;
	int arr[1000];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	binaryprefix(arr,n);

return 0;	
}