#include<bits/stdc++.h>
using namespace std;
bool isValid(string s) {
	stack<char> stk;
// 	for (char& c : s) {
// 		switch (c) {
// 		case '(': bracket.push(c); break;
// 		case '{': bracket.push(c); break;
// 		case '[': bracket.push(c); break;
// 		case ')': if (bracket.empty() || bracket.top() != '(') return false; else bracket.pop(); break;
// 		case '}': if (bracket.empty() || bracket.top() != '{') return false; else bracket.pop(); break;
// 		case ']': if (bracket.empty() || bracket.top() != '[') return false; else bracket.pop(); break;
// 		default: ;
// 		}
// 	}
// 	return bracket.empty() ;
// }
	int n = s.size();
	bool ans = true;
	for (int i = 0; i < n; i++) {
		if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
			stk.push(s[i]);
		}
		else if (s[i] == ')') {
			if (stk.top() == '(') {
				stk.pop();
			}
			else {
				ans = false;
				break;
			}
		}
		else if (s[i] == ']') {
			if (stk.top() == '[') {
				stk.pop();
			}
			else {
				ans = false;
				break;
			}
		}
		else if (s[i] == '}') {
			if (stk.top() == '{') {
				stk.pop();
			}
			else {
				ans = false;
				break;
			}
		}
	}
	return stk.empty();
}

int main() {
	string s ;
	cin >> s;
	bool check = isValid(s);
	if (check) {
		cout << "True";
	}
	else {
		cout << "False";
	}
}