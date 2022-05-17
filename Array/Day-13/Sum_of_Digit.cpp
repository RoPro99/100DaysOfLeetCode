#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main() {
	int n, remineder, sum = 0, m = 1;
	cin >> n;
	while (n > 0) {
		remineder  = n % 10;
		//sum += r;
		//mul *= r;
		m = m * remineder;
		sum = sum + remineder;
		n = n / 10;


	}
	cout << (m - sum) << endl;



	return 0;
}