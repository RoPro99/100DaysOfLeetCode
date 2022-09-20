#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main() {
	int arr[1000];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {

		cin >> arr[i];
	}
	int target;
	cin >> target;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n - 1; j--) {
			if (arr[i] + arr[j] == target) {
				cout << i << "," << j << endl;
			}
		}
	}

	return 0;
}