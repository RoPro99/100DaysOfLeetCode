#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int main() {

	string s;
	cin >> s;
	string word = " ";
	for (int i = s.size() - 1; i >= 0; i--) {
		if (s[i] != ' ') {
			word += s[i];
		}
		else {
			if (word != " ") {
				return s.size();
			}
		}
	}
	cout << s.size() << endl;
	return 0;

}