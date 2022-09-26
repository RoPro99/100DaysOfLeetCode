#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int arr[10000];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}
	int lsum = 0;
	int rsum = sum;
	for (int i = 0; i < n; i++) {
		rsum = rsum - arr[i];
		if (lsum == rsum) {
			cout << i << endl;
		}
		lsum += arr[i];
	}
	cout << "-1" << endl;
	return 0;
}