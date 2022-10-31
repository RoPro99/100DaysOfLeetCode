#include<bits/stdc++.h>
using namespace std;
int length(char*s){
	int cnt=0;
	for(int i=0;s[i]!='\0';i++){
		cnt++;
	}
	return cnt;
}
void tolower(char*s){

	for(int i=0;i<length(s);i++){
		if(s[i]>=65 && s[i]<=90){
			s[i]=s[i]+32;
			
		}
		
	}
	cout<<s<<endl;
}
int main(){
	char s[10000];
	cin>>s;
	tolower(s);
	

return 0;	
}