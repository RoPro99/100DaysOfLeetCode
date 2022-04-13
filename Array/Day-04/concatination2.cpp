#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main() {

	vector<int>nums;
	int n = nums.size();
	for (int i = 0; i < n; i++) {
		nums.push_back(nums[i]);
	} for (int i = 0; i < n; i++) {
		cout << nums[i] << " ";
	}
	return 0;
}