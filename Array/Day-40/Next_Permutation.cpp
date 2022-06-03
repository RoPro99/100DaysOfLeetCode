#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void nextpermutation(int arr[], int n) {
	int k, l;
	for (k = n - 2; k >= 0; k--) {
		if (arr[k] < arr[k + 1]) {
			break;
		}
	}
	if (k < 0) {
		reverse(arr.begin(), arr.end());

	}
	else {
		for (int l = n - 1; l > k; l--) {
			if (arr[l] > arr[k]) {
				break;
			}
		}
		swap(arr[k], arr[l]);
		reverse(arr.begin() + k + 1, arr.end());
	}
}
int main() {
	int n;
	cin >> n;
	int arr[1000];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	nextpermutation(arr, n);
	for (int i = 0; i < n; i++) {
		cout << arr[i] << ",";
	}
	return 0;
}