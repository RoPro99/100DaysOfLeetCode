#include<bits/stdc++.h>
using namespace std;
void meanarray(int *arr,int n){
	sort(arr,arr+n);
	double sum = 0, count = 0;

	for (int i = n / 20; i < n - (n / 20); i++) {
		sum += arr[i];
		count++;
	}
	cout<<(sum/count)<<endl;
}
int main(){
	int n;
	cin>>n;
	int arr[1000];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	meanarray(arr,n);

return 0;	
}