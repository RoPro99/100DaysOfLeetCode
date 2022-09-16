#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void square(int *arr, int n) {
	int sqare = 0;
	for (int i = 0; i < n; i++) {
		sqare = arr[i] * arr[i];
		arr[i] = sqare;
		cout << arr[i] << ",";

	}
	cout << endl;
	sort(arr, arr + n);
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}



}

int main() {
	int n;
	cin >> n;
	int arr[1000];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	square(arr, n);


	return 0;
}