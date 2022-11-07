#include<bits/stdc++.h>
using namespace std;
int firstunique(char*str){
	int l=strlen(str);
	for(int i=0;i<l;i++){
		bool flag=true;
		for(int j=0;j<l;j++){
			if(i!=j && str[i]==str[j]){
				flag=false;
				break;
			}
		}
		if(flag==true){
			return i;
		}
		
	}
	return -1;
}
int main(){
	char str[1000];
	cin>>str;
	cout<<firstunique(str);

return 0;	
}