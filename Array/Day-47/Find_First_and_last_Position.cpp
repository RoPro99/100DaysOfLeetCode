#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int firstposition(int *arr, int n, int target) {
	int ans = -1;
	int start = 0;
	int end = n - 1;
	while (start <= end) {
		int mid = start + (end - start) / 2;
		if (arr[mid] < target) {
			start = mid++;
		}
		else if (arr[mid] > target) {
			start = mid--;
		}
		else {
			ans = mid;
			end = mid--;
		}

	}
	return ans;
}
int lastposition(int *arr, int n, int target) {
	int ans = -1;
	int start = 0;
	int end = n - 1;
	while (start <= end) {
		int mid = start + (end - start) / 2;
		if (arr[mid] < target) {
			start = mid++;
		}
		else if (arr[mid] > target) {
			start = mid--;
		}
		else {
			ans = mid;
			start = mid++;
		}

	}
	return ans;
}
int main() {
	int n;
	cin >> n;
	int arr[1000];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int target;
	cin >> target;
	cout << firstposition(arr, n, target) << ",";
	cout << lastposition(arr, n, target) << ",";

	return 0;
}