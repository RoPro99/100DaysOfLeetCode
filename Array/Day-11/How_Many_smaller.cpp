#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main() {
	int n, i;
	cin >> n;
	int arr[1000];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int ans[1000];
	for (int i = 0; i < n; i++) {
		int cnt = 0;
		for (int j = 0; j < n; j++) {
			if (arr[j] < arr[i]) {
				cnt++;
			}
			ans[i] = cnt;

		}
	}
	for (int i = 0; i < n; i++) {
		cout << ans[i]  << " ";
	}







	return 0;
}