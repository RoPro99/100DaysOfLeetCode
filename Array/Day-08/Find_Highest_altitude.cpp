#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main() {
	int n, i;
	cin >> n;
	int arr[1000];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];

	}
	for (int i = 0; i < n; i++) {
		arr[i] = max(arr[i], arr[i + 1]);
	}
	cout << arr[i] << endl;
	return 0;
}