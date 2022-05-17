#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main() {
	int n, ans = 0;
	cin >> n;
	int d = 2;
	while (n > 1) {
		if (n % d == 0) {
			ans += d;
			n = n / d;
		}
		d++;
	}
	cout << ans << endl;
	return 0;
}