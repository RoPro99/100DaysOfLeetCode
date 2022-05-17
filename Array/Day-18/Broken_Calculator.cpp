#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main() {
	int startvalue, target;
	int result = 0;
	cin >> startvalue;
	cin >> target;

	while (target > startvalue) {
		result++;
		if (target % 2 == 0) {
			target = target / 2;
		}
		else {
			target++;
		}
	}
	cout << result + (startvalue - target) << endl;
	return 0;
}