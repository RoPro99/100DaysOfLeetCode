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
	int copy[1000];
	for (int i = 0; i < n; i++) {
		copy[i] = arr[i];
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] << "," << copy[i] << ",";
	}


	return 0;
}