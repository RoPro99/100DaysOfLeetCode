#include<bits/stdc++.h>
using namespace std;
bool copycnt(int *arr,int n){
	vector<int>ans;
	sort(arr,arr+n);
	int i=0;
	while(i<n){
		int cnt=1;
		for(int j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				cnt++;
			}
			else{
				break;
			}
		}
		ans.push_back(cnt);
		i = i+cnt;
		cout<<" "<<cnt<<endl;
		
	}
	int siz=ans.size();
	sort(ans.begin(), ans.end());
	for(int i=0;i<siz-1;i++){
		if(ans[i]==ans[i+1]){
			return false;
		}
	}
	return true;
	
}

int main(){
	int n;
	cin>>n;
	int arr[1000];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	if(copycnt(arr,n)){
		cout<<"True"<<endl;
	}
	else{
		cout<<"False"<<endl;
	}
	
	

return 0;	
}