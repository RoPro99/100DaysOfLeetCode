#include<bits/stdc++.h>
using namespace std;
bool happynumber(int n){
	if(n==1){
		return true;
	}
	if(n>1 && n<= 4){
		return false;
	}
	int sum=0;
	while(n>0){
		int rem=n%10;
		sum =sum+(rem*rem);
		n/=10;
	}
	return happynumber(sum);
}
int main(){
	int n;
	cin>>n;
   if(happynumber(n)){
   	cout<<"True"<<endl;
   }
   else{
   	cout<<"False"<<endl;
   }

return 0;	
}