#include "pch.h"
#include <iostream>
using namespace std;
const int ROWS = 100;
const int COLS = 100;
 void funkCols(int arr[ROWS][COLS], int rows, int cols)
{
	 int countEven = 0, countOdd = 0;
	 for (int i = 0; i < cols; i++)
	 {
		 for (int j = 0; j < rows; j++)
		 {
			 if (arr[j][i] % 2 == 0)
			 {
				 countEven++;
			 }
			 else
			 {
				 countOdd++;
			 }
		 }
		 cout << "Evens:" << countEven << " " << "Odds:" << countOdd << endl;
		 countEven = 0;
		 countOdd = 0;
	 }
 }
 void funkRows(int arr[ROWS][COLS], int rows, int cols)
 {
	 int countEven = 0, countOdd = 0;
	 for (int i = 0; i < rows; i++)
	 {
		 for (int j = 0; j < cols; j++)
		 {
			 if (arr[i][j] % 2 == 0)
			 {
				 countEven++;
			 }
			 else
			 {
				 countOdd++;
			 }

		 }
		 cout << "Evens:" << countEven << " " << "Odds:" << countOdd << endl;
		 countEven = 0;
		 countOdd = 0;
	 }
 }
int main()
{
	int arr[ROWS][COLS], rows, cols;
	cout << "Enter rows length:";
	cin >> rows;
	cout << "Enter columns length:";
	cin >> cols;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cin >> arr[i][j];
		}
	}
	cout << "By rows:"<<endl;
	funkRows(arr, rows, cols);
	cout << "By columns:"<<endl;
	funkCols(arr, rows, cols);
	return 0;
}

