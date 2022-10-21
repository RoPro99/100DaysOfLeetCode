#include<bits/stdc++.h>
using namespace std;
class calc{
public:
	void addition(int a,int b){
		cout<<"Addition-:"<<(a+b)<<endl;
	
	}
	void substraction(int a,int b){
		cout<<"Substraction-:"<<(a-b)<<endl;
		
	}
	
};
int main(){
	calc c;
	int a,b,t;
	char ch;
	cout<<"How Many Operation You Want Perfrom?"<<endl;
	cin>>t;
	while(t--){	
	cout<<"enter value for A"<<endl;
	cin>>a;
    cout<<"enter value for B"<<endl;
	cin>>b;
	cout<<"Enter Operation"<< "+"<< "-"<< "X"<<endl;
    cin>>ch;
	if(ch=='+'){
		c.addition(a,b);
		
	}
	else if(ch=='-'){
		c.substraction(a,b);
	
	}
	else if(ch=='X'){
		break;
	}
}
	
	
	
	
	return 0;
}
	

	
	
	
	
