#include<bits/stdc++.h>
using namespace std;
int main(){
	int num;
	cin>>num;
	int sum = 0, tmp = num;
        while (num) {
            sum += num % 10;
            num /= 10;
        }
        cout<<(tmp - sum % 2) / 2;

return 0;	
}