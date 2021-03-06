#include "pch.h"
#include <iostream>
using namespace std;
const int SIZE = 100;
void Sort(int * arr, int sz)
{
	for (int i = sz - 2; i > 0; i--)
	{
		for (int j = 0; j <= i; j++)
		{
			if (arr[j + 1] < arr[j])
			{
				swap(arr[j + 1], arr[j]);
			}
		}
	}
}
void MergeArrays(int *arr1, int size1,int size2,int *arr2,int *arr3,int size3)
{
	int i;
	size3 = size1 + size2;
	for ( i = 0; i < size1; i++)
	{
		arr3[i] = arr1[i];
	}
	for ( ; i < size3; i++)
	{
		arr3[i] = arr2[i - size1];
	}
	Sort(arr3, size3);
}
int main()
{
	int arr1[SIZE], arr2[SIZE], arr3[SIZE], size3, size2, size1,i,j;
	cin >> size1;
	for ( i = 0; i < size1; i++)
	{
		cin >> arr1[i];
	}
	cin >> size2;
	for ( j = 0; j < size2; j++)
	{
		cin >> arr2[j];
	}
	size3 = size1 + size2;
	MergeArrays(arr1, size1, size2, arr2, arr3, size3);
	for ( i = 0; i < size3; i++)
	{
		cout << arr3[i] << " ";
	}
	return 0;
}
