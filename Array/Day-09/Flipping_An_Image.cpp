#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void reverseRow(int arr[][1000], int n) {
	for (int row = 0; row < n; row++) {
		int starcol = 0;
		int endcol = n - 1;
		while (starcol < endcol) {
			swap(arr[row][starcol] , arr[row][endcol] );
			starcol++;
			endcol--;
		}

	}
}
void invert(int arr[][1000], int n) {
	for (int row = 0; row < n; row++) {
		for (int col = 0; col < n; col++) {
			arr[row][col] ^= 1;
		}
	}
}
void Display(int arr[][1000], int n) {
	for (int row = 0; row < n; row++) {
		for (int col = 0; col < n; col++) {
			cout << arr[row][col] << " ";
		}
		cout << endl;
	}
}
int main() {
	int n;
	cin >> n;
	int arr[1000][1000] = {0};
	for (int row = 0; row < n; row++) {
		for (int col = 0; col < n; col++) {
			cin >> arr[row][col];
		}
	}
	reverseRow(arr, n);
	invert(arr, n);


	Display(arr, n);

	return 0;
}