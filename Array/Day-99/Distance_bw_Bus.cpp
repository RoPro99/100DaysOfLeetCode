#include<bits/stdc++.h>
using namespace std;
int busstop(int *distance,int n,int start,int dest){
	if(start>dest){
		swap(start,dest);
	}
	int clockwise=0;
	int totaldistance=0;
	for(int i=0;i<n;i++){
	if(i>=start && i<dest){
		clockwise += distance[i];
	}
	
	totaldistance += distance[i];	
	}
	int res=min(clockwise,totaldistance-clockwise);
	return res;
}
int main(){
	int n;
	cin>>n;
	int distance[1000];
	for(int i=0;i<n;i++){
		cin>>distance[i];
	}
	int start,dest;
	cin>>start>>dest;
	cout<<busstop(distance,n,start,dest)<<endl;
	

return 0;	
}