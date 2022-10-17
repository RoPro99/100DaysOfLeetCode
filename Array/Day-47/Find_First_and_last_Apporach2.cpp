#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void fistlast(int *arr, int n, int target) {
	int i = 0;
	int j = n - 1;
	int ans[] = { -1, -1};
	while (i < n) {
		if (arr[i] == target) {
			ans[0] = i;
			break;
		}
		i++;
	}
	while (j >= 0) {
		if (arr[j] == target) {
			ans[1] = j;
			break;
		}
		j--;
	}
	for(int i=0;i<2;i++){
		cout<<ans[i]<<",";
		
	}

}
int main() {
	int n;
	cin >> n;
	int arr[1000];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int target;
	cin >> target;
	fistlast(arr, n, target);


	return 0;
}