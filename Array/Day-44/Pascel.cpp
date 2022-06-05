#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void pascalTriangle(int rows)
{
	if (rows == 0)
		return;

	vector <int> rowVector;

	for (int i = 0; i < rows; i++)
	{
		rowVector.insert(rowVector.begin(), 1);

		for (int j = 1; j < rowVector.size() - 1 ; j++)
			rowVector[j] = rowVector[j] + rowVector[j + 1];

		for (auto i : rowVector)
			cout << i << " ";

		cout << endl;
	}
}
int main()
{
	int rows = 5;

	cout << "The pascal triangle of " << rows << " rows is" << endl;
	pascalTriangle(rows);


	return 0;
}