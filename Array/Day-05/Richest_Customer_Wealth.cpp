#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main() {
	int arr[1000][1000];
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}
	int maxWealth = 0;
	for (int i = 0; i < n; i++) {
		int wealth = 0;
		for (int j = 0; j < m; j++) {
			wealth += arr[i][j];
		}
		maxWealth = max(maxWealth, wealth);
	}
	cout << maxWealth << " " << endl;




	return 0;
}