#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void parity(int *arr, int n) {
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		swap(arr[i], arr[cnt]);
		cnt++;
	}
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
	parity(arr, n);

	return 0;
}