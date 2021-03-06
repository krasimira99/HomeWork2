#include "pch.h"
#include <iostream>
using namespace std;
const int SIZE = 100;
int convertDecimalToBinary(int number)
{
	int binaryNumber = 0;
	int remainder, i = 1;

	while (number != 0)
	{
		remainder = number % 2;
		number /= 2;
		binaryNumber += remainder * i;
		i *= 10;
	}
	return binaryNumber;
}
void PrintArray(int *arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "->" << convertDecimalToBinary(arr[i]) << endl;
	}
}
int main()
{
	int arr[SIZE], size;
	cout << "Enter size of array:";
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	cout << "The elements of the array in binary are:" << endl;
	PrintArray(arr, size);

	return 0;
}


