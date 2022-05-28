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
	sort(arr, arr + n);
	int k;
	cin >> k;
	for (int i = 0; i < n; i++) {
		cout << arr[arr[k - 1]];
	}
	return 0;
}