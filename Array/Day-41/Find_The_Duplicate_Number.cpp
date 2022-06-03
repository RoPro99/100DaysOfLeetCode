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
	int ans = 0;
	sort(arr, arr + n);
	for (int i = 0; i < n; i++) {
		if (arr[i] == arr[i + 1]) {
			ans = arr[i];

		}
	}
	cout << ans << endl;
	return 0;
}