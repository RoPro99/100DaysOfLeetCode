#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int arr[1000];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}//find even array
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) {
			cout << arr[i] << " ";
		}
	}
	cout << endl;
	int fr[10000];
	int vis = -1;

	//take the frequency of array
	for (int i = 0; i < n; i++) {
		int cnt = 1;
		for (int j = i + 1; j < n; j++) {
			if (arr[i] == arr[j]) {
				cnt++;
				fr[i] = vis;

			}
		}
		if (fr[i] != vis) {
			fr[i] = cnt;
		}
	}
	for (int i = 0; i < n; i++) {
		if (arr[i] != vis) {
			cout << arr[i] << " ";
			cout << fr[i] << " ";
		}
	}






	return 0;
}