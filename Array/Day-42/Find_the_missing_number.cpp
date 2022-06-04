#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int findmissing(int *arr, int n) {
	vector<int> substitute(n, 0); // initializing the substitute array with 0 of size n+1.

	vector<int> ans;              // initializing the answer  array .

	for (int i = 0; i < n; i++)
	{
		substitute[arr[i]]++;
	}

	for (int i = 1; i <= n; i++)
	{
		if (substitute[i] == 0 || substitute[i] > 1)
		{
			ans.push_back(i);
		}
	}

	return ans;

}
int main() {
	int n;
	cin >> n;
	int arr[1000];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	findmissing(arr, n);
	return 0;
}