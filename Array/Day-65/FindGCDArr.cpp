#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int Findgcd( int small, int large) {
	if (small == 0) {
		return large;
	}
	if (large == 0) {
		return small;
	}
	while (small != large) {    s=11 l=19
		if (small > large) {   
			small = small - large;
		}
		if (large > small) {
			large = large - small;
		}

	}
	return small;

}
int main() {
	int n;
	cin >> n;
	int arr[1000];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	/****find min elelment arrray***/
	int small = INT_MAX;
	for (int i = 0; i < n; i++) {
		if (arr[i] < small) {
			small = arr[i];
		}

	}
	cout << small << endl;
	/*****Find max elemenr array**/
	int large = INT_MIN;
	for (int i = 0; i < n; i++) {
		if (arr[i] > large) {
			large = arr[i];
		}
	}
	cout << large << endl;
	cout << Findgcd(  small, large) << endl;

	return 0;
}
