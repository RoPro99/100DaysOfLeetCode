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

	int cnt = 0;
	for (int i = 0; i < n; i++) {
		int Noofdigit = 0;
		while (arr[i] != 0) {
			Noofdigit++;
			arr[i] /= 10;

		}
		cout << Noofdigit << endl;
		if (Noofdigit % 2 == 0) {
			cnt++;
		}
	}
	cout << cnt << endl;


	return 0;

}