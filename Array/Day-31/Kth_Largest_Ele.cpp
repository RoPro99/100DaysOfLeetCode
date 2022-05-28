#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool compare(int a, int b) {
	return a > b;
}
int main() {
	int n;
	cin >> n;
	int arr[10000];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n, compare);
	int k;
	cin >> k;
	cout << arr[arr[k - 1]];

	return 0;
}