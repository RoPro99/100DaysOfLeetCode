#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int missingnumber(int *arr, int n) {
	int xo = n;
	for (int i = 0; i < n; i++) {
		xo ^= i;
		xo ^= arr[i];
	}
	return xo;
}
int main() {
	int n;
	cin >> n;
	int arr[10000];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << missingnumber(arr, n) << endl;
	return 0;
}