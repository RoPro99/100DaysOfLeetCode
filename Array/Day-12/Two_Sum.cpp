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
	int target;
	cin >> target;
	int i = 0;
	int j = n - 1;
	while (i < j) {
		int currentsum = arr[i] + arr[j];
		if (currentsum > target) {
			j--;
		}
		else if (currentsum < target) {
			i++;
		}
		else if (currentsum == target) {
			cout << i << ", " << j << endl;
			i++;
			j--;
		}
	}
	return 0;
}