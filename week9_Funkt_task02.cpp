#include "pch.h"
#include <iostream>
using namespace std;
const int SIZE = 100;
void EvenAndOdd(int *arr, int size)
{
	int countEven = 0;
	int countOdd = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 0)
		{
			countEven++;
		}
	}
	cout << "Even-->" << countEven << endl;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 != 0)
		{
			countOdd++;
		}
	}
	cout << "Odd--> " << countOdd << endl;
}
int main()
{
	int arr[SIZE], size;
	cout << "Enter size of array: ";
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	EvenAndOdd(arr, size);
	return 0;
}

