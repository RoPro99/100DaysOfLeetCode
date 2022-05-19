#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int arr[1000];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int majority = arr[0];
	int cnt = 1;
	for (int i = 1; i < n; i++) {
		if (arr[i] == majority) {
			cnt++;
		}
		else {
			cnt--;
			if (cnt == 0) {
				majority = arr[i];
				cnt++;
			}
		}
	}
	cout << majority << " ";
	return 0;
}