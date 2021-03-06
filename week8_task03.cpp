#include "pch.h"
#include <iostream>
using namespace std;
const int COLS = 100;
const int ROWS = 100;
void printMatrix(int matrix[ROWS][COLS], int n, int m)
{
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i==j)
			{
				matrix[i][j] = i;
			}
			if (i>j)
			{
				matrix[i][j] = i * j;
			}
			if (i<j)
			{
				matrix[i][j] = j - i;
			}
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}
int main()
{
	int n, m, matrix[ROWS][COLS];
	cout << "Enter size for columns:";
	cin >> n;
	cout << "Enter size for rows:";
	cin >> m;
	if (n!=m)
	{
		cout << "To have a primary diagonal, the matrix must be square" << endl;
		return 0;
	}
	printMatrix(matrix, n, m);
	return 0;
}


