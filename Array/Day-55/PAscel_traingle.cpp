#include <bits/stdc++.h>
using namespace std;

int nCr(int n,int r)
{
    if(n==0 || r==0 || r==n)
        return 1;

    return nCr(n-1,r-1)+ nCr(n-1,r);
}


vector<int> getRow(int rowIndex) 
{
    vector<int> res(rowIndex+1);

    for(int i=0;i<=rowIndex;i++)
        res[i]= nCr(rowIndex,i);

    return res;

}

int main() 
{
    int rowIndex=3;
    vector<int> ans= getRow(rowIndex);
    for(auto val:ans) cout<<val<<" ";
    
    cout<<endl;
    return 0; 
}
