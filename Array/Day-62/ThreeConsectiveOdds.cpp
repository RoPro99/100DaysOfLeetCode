#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool consectiveodds(int *arr, int n) {

	for (int i = 2; i < n; i++) {
		if (arr[i] % 2 != 0 && arr[i - 1] % 2 != 0 && arr[i - 2] % 2 != 0) {
			return true;
		}
	}
	return false;

}

int main() {
	int n;
	cin >> n;
	int arr[1000];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	if (consectiveodds(arr, n)) {
		cout << "True" << endl;
	}
	else {
		cout << "false" << endl;
	}
	return 0;
}