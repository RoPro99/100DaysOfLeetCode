#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void transposeMatrix(int arr[][1000], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++)
		{

			swap(arr[i][j], arr[j][i]);
		}
	}
}
void display(int arr[][1000], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << arr[i][j] << ",";
		}
		cout << endl;
	}
}
int main() {
	int n;
	cin >> n;
	int arr[1000][1000];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}
	transposeMatrix(arr, n);
	display(arr, n);
	return 0;
}