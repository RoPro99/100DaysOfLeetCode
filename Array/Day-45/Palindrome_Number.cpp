#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int isPalindrome(int *arr, int n) {
	int i = 0;
	int j = n - 1;
	while (i < j) {
		if (arr[i] == arr[j]) {
			i++;
			j--;
		}
		else {
			return false;
		}
	}
	return true;
}
int main() {
	int n;
	cin >> n;
	int arr[10000];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	if (isPalindrome(arr, n)) {
		cout << "True" << endl;
	} else {
		cout << "False" << endl;
	}
	return 0;
}