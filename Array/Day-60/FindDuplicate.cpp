#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void rotate(int *arr, int n, int k) {
	int i = 0;
	int j = n - 1;
	while (i <= j) {
		swap(arr[i], arr[j]);
		i++;
		j--;
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	} cout << endl;
	reverse(arr, arr + k);


	reverse(arr + k, arr + n);
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

}
int main() {
	int n;
	cin >> n;
	int arr[10000];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int k;
	cin >> k;
	rotate(arr, n, k);
	return 0;
}