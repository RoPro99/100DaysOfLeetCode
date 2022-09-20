#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int targetvalue(int *arr, int target, int n) {

	for (int i = 0; i < n; i++) {
		if (arr[i] >= target) {
			return i;
		}

	}
	return n;
}
int main() {
	int n;
	cin >> n;
	int arr[1000];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int target;
	cin >> target;
	cout << targetvalue(arr, target, n) << endl;
	return 0;

}