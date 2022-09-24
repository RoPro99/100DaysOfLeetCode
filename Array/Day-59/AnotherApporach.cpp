#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool contain(int *arr, int n) {


	int result = false;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n ; j++) {

			if (arr[i] == arr[j]) {
				result = true;

			}

		}
	}
	return result;



}
int main() {
	int n;
	cin >> n;
	int arr[1000];
	for (int i = 0; i < n; i++) {+
		cin >> arr[i];
	}
	if (contain(arr, n)) {
		cout << "True" << endl;
	}
	else {
		cout << "False" << endl;
	}


	return 0;
}
