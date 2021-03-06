#include "pch.h"
#include <iostream>
using namespace std;
const int SIZE = 100;
void swap(int& left, int& right)
{
	int temp = left;
	left = right;
	right = temp;
}
void ReverseArray(int * arr, int size)
{
	for (int i = 0; i < size / 2; i++)
	{
		swap(arr[i], arr[size - i - 1]);
	}
}
void PrintArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
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
	ReverseArray(arr, size);

	cout << "After reversing: " << endl;
	PrintArray(arr, size);

	return 0;
}

