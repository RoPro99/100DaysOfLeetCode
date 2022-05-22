#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int price(int *arr, int n) {
	if (n == 0) {
		return 0;
	}
	int ans = 0;

	int start = arr[0], end = arr[0];

	for (int i = 0; i < n; i++) {
		if (arr[i] < start) {
			//restart as session
			ans = max(ans, end - start);
			start = arr[i];
			end = arr[i];
		} else {
			//continue current session
			end = max(end, arr[i]);
		}
	}
	ans = max(ans, end - start);
	return ans;
}
int main() {

	int n;
	cin >> n;
	int arr[1000];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << price(arr, n) << endl;

	return 0;
}