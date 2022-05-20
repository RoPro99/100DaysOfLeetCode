#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int arr[1000];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int res = 0;
	for (int i = 0; i < n; i++) {
		res ^= arr[i];
	}
	cout << res << endl;
	return 0;
}