#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool containtwo(int *arr, int n, int k) {
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n && j <= i + k; j++) {
			if (arr[j] == arr[i]) {
				return true;
			}
		}
	}
	return false;
}
int main() {
	int n;
	cin >> n;
	int arr[10000];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int k; cin >> k;
	if (containtwo(arr, n, k)) {
		cout << "True" << endl;
	}
	else {
		cout << "False" << endl;
	}

	return 0;
}