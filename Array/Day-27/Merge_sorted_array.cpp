#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main() {
	int n;
	int m;
	cin >> n >> m;
	int arr1[1000];
	int arr2[1000];
	for (int i = 0; i < n; i++) {
		cin >> arr1[i];
	}
	for (int j = 0; j < n; j++) {
		cin >> arr2[j];
	}
	int i = m - 1;
	int j = n - 1;
	int k = m + n - 1;
	while (j >= 0) {
		arr1[k--] = i >= 0 && arr1[i] > arr2[j] ? arr1[i--] : arr2[j--];

	}

	return 0;
}