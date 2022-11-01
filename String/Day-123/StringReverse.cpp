#include<bits/stdc++.h>
using namespace std;
void reversestring(char*str){
	int i=0;
	int j=strlen(str)-1;
	while(i<j){
		char tmp=str[i];
		str[i]=str[j];
		str[j]=tmp;
		i++;
		j--;
	}
	cout<<"Reverse:"<<str;
	
}
int main(){
	char str[100];
	cin.getline(str,100);
	reversestring(str);


return 0;	
}