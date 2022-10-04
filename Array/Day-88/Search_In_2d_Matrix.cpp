#include<bits/stdc++.h>
using namespace std;
bool findtarget(int arr[][1000],int row,int col,int target){
	bool result=false;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			if(arr[i][j]==target){
				result=true;
			}
		}
	}
	return result;
	
	
}
int main(){
	int row,col;
	cin>>row>>col;
	int arr[1000][1000];
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cin>>arr[i][j];
		}
	}
	int target;
	cin>>target;
	if(findtarget(arr,row,col,target)){
		cout<<"True"<<endl;
	}
	else{
		cout<<"False"<<endl;
	}

return 0;	
}