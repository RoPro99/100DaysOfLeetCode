#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool kidsCandy(int *arr, int n) {
	int extracandies;
	cin >> extracandies;
	int maxcandy = arr[0];
	for (int i = 0; i < n; i++) {
		if (arr[i] > maxcandy) {
			maxcandy = arr[i];
		}
	}
	int result[1000];
	for (int i = 0; i < n; i++) {
		result[i] = (arr[i] + extracandies >= maxcandy);
	}
	return result;

}
int main() {
	int n;
	cin >> n;
	int arr[10000];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (bool x : kidsCandy(arr, n)) {
		if (x) {
			cout << "true" << ",";
		}
		else {
			cout << "false" << ",";
		}
	}



	return 0;
}