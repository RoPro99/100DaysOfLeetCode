#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			cnt++;
		}
	}
	cout << cnt << endl;
	if (cnt == 3) {
		cout << "True" << endl;
	}
	else {
		cout << "False" << endl;
	}
	return 0;
}