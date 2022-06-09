#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int commanprefix(string str, int n) {
	if (n == 0) {
		return 0;
	}
	string ans = "";
	//1 Sort
	sort(str, str + n);
	//2 variable
	string first = str[0];
	string last = str[n - 1];
	for (int i = 0; i < first.size(); i++) {
		if (first[i] == last[i]) {
			ans += first[i];
		}
		else
			break;
	}
	return ans;

}
int main() {
	int n;
	cin >> n;
	string str;
	cin >> str;
	cout << commanprefix(str, n) << endl;
	return 0;
}