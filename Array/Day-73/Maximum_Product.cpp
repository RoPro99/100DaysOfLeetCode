#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int arr[1000];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	int x, y;
	x = arr[n - 1] * arr[n - 2] * arr[n - 3];
	y = arr[0] * arr[1] * arr[n - 1];
	cout << max(x, y) << endl;
	return 0;
}