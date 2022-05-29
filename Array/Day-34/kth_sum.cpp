
#include <bits/stdc++.h>
using namespace std;
int largestSumAfterKNegations(vector<int>& A, int K) {
	sort(A.begin(), A.end());
	int sum = 0, neg = 0, zero = 0;
	for (int i = 0; i < A.size(); i++)
	{
		if (A[i] == 0)
			zero = 1;
		if (A[i] < 0 && K > 0)
		{  A[i] = -A[i]; K--;}
		sum += A[i];
	}
	if (zero || K == 0 || K % 2 == 0)
		return sum;
	else
		return sum - 2 * (*min_element(A.begin(), A.end()));
}
int main()
{
	vector<int> arr = {2, -3, -1, 5, -4};
	int k = 2;
	cout << largestSumAfterKNegations(arr, k) << endl;
	return 0;
}