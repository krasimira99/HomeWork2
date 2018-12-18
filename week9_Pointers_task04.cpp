#include "pch.h"
#include <iostream>
using namespace std;
const int ROWS = 100;
const int COLS = 100;
void Transpose(int arr[ROWS][COLS], int rows, int arrTr[ROWS][COLS], int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arrTr[j][i] = arr[i][j];
		}
	}
	for (int i = 0; i < cols; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			cout << arrTr[i][j] << " ";
		}
		cout << endl;
	}
}
int main()
{
	int arr[ROWS][COLS], arrTr[ROWS][COLS], rows, cols;
	cin >> rows;
	cin >> cols;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cin >> arr[i][j];
		}
	}
	Transpose(arr, rows, arrTr, cols);
}
