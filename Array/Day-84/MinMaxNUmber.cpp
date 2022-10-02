#include<bits/stdc++.h>
using namespace std;
void MinMax(int *num,int n){
	
	while(n>1){
	for(int i=0;i<n/2;i++){
		if(i%2==0){
			 num[i]=min(num[2*i],num[2*i+1]);
		}
		else{
			 num[i]=max(num[2*i],num[2*i+1]);
		}
		n = n/2;
	}
}
for(int i=0;i<1;i++){
	cout<<num[0]<<endl;
}
	
}

int main(){
	int n;
	cin>>n;
	int num[1000];
	for(int i=0;i<n;i++){
		cin>>num[i];
	}
	MinMax(num,n);
               
return 0;	
}