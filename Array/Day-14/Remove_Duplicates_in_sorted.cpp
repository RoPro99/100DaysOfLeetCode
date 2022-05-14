#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int removeDuplicated(int *arr, int n, int k) {

	if (n == 0 || n == 1)
		return n;

	// To store index of next unique element
	int j = 0;

	// Doing same as done in Method 1
	// Just maintaining another updated index i.e. j
	for (int i = 0; i < n - 1; i++)
		if (arr[i] != arr[i + 1])
			arr[j++] = arr[i];

	arr[j++] = arr[n - 1];

	return j;
}
int main() {
	int n;
	cin >> n;
	int arr[1000];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int k;
	cin >> k;
	removeDuplicated(arr, n, k);
	for (int i = 0; i < k; i++) {
		cout << arr[i] << ",_";
	}
	return 0;
}