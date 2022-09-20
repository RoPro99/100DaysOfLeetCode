#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int non_repeating(int *arr, int n) {
	int i, j;

	for (  i = 0; i < n; i++) {
		for (  j = 0; j < n; j++) {
			if (arr[i] == arr[j] && i != j)
				break;
		}
		if (j == n) {
			cout << arr[i] << " ";

		}
	}
	return -1;
}
int main() {
	int n;

	cin >> n;
	int arr[100];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	non_repeating(arr, n);

	return 0;
}