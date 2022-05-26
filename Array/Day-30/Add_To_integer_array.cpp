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
	int k;
	cin >> k;
	for (int i = n - 1; i >= 0; i--) {
		arr[i] += k;
		k = arr[i] / 10;
		arr[i] = arr[i] % 10;
	}
	while (k > 0) {
		for (int i = 0; i < n; i++) {
			arr[i] = k % 10;
		}
		k /= 10;
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] << ",";
	}
	return 0;
}