#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main() {
	int num;
	cin >> num;
	int arr[1000];
	for (int i = 0; i < num; i++) {
		cin >> arr[i];
	}
	int n;
	cin >> n;
	int ans[1000];
	for (int i = 0; i < 2 * n; i++) {
		if (i % 2 == 0) {
			ans[i] = arr[i / 2];
		}
		else {
			ans[i] = arr[n + i / 2];
		}

	}
	for (int i = 0; i < num; i++) {
		cout << ans[i] << " ,";
	}



	return 0;
}