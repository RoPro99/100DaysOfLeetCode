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
	int ans[1000];
	for (int i = 0; i < n; i++) {
		ans[i] = arr[arr[i]];
	}
	for (int i = 0; i < n; i++) {
		cout << ans[i] << " ";
	}
	return 0;
}