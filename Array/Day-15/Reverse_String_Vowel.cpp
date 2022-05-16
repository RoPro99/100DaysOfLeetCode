#include<bits/stdc++.h>
#include<iostream>
using namespace std;
string  reverse(string s ) {
	int i = 0;
	int j = s.size() - 1;
	set<char>vowel = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};


	while (i < j) {
		if (s == vowel) {
			char tmp = s[i];
			s[i] = s[j];
			s[j] = tmp;
			i++;
			j--;
		}
	}
	return s;
}
int main() {
	string s;
	getline(cin, s);
	cout << reverse(s) << " ";


	return 0;
}