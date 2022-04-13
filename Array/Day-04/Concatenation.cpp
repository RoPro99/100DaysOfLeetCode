#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// vector<int> getConcatenation(
int getConcatenation(int *nums) {
	vector<int>nums; {
		int n = nums.size();
		for (int i = 0; i < n; i++) {
			nums.push_back(nums[i]);
		}
	}
	return nums;

}
int main() {
	int n;
	cin >> n;
	int nums[1000];
	for (int i = 0; i < n; i++) {
		cin >> nums[i];

	}
	getConcatenation(nums);
	for (int i = 0; i < n; i++) {
		cout << nums[i] << " ";
	}

	return 0;
}