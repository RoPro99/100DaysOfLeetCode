#include<bits/stdc++.h>
using namespace std;
void targetarray(int *num,int *index,int n){
	int target[1000];
	for(int i=0;i<n;i++){
		for(int j=i-1;j>=index[i];j--){
			target[j+1]=target[j];
			target[index[i]]=num[i];
		}
	}
	for(int i=0;i<n;i++){
		cout<<target[i]<<",";
	}
	
}
int main(){
	int n;
	cin>>n;
	int num[1000];
	int index[1000];
	for(int i=0;i<n;i++){
		cin>>num[i];
	}
	for(int i=0;i<n;i++){
		cin>>index[i];
	}
	targetarray(num,index,n);

return 0;	
}