#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int combinationsum(int *arr, int n, int target) {
	if (target == 0) {
		return 1;
	}
	int res = 0;
	for (int i = 0; i < n; ++i)
	{
		if (target >= arr[i]) {
			res += combinationsum(arr, n, target - arr[i]);
		}
	}
	return res;
}
int main() {
	int n;
	cin >> n;
	int arr[10000];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int target;
	cin >> target;
	cout << combinationsum(arr, n, target) << endl;
	return 0;
}