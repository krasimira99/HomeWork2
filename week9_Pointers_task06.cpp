#include "pch.h"
#include <iostream>
using namespace std;
const int SIZE = 100;
double AverageOfTheLastElements(double FirstNum)
{
	return FirstNum / 2;
}
double Average(double FirstNum, double SecNum)
{
	return (FirstNum + SecNum) / 2;
}
int HeadFunction(double arr[SIZE], int size)
{
	int prom = -1;
	for (int i = 0; i < size; i++)
	{
		if (i == 0)
		{
			if (AverageOfTheLastElements(arr[i+1]) == arr[i])
			{
				prom = i;
			}
		}
		
		else if (Average(arr[i + 1], arr[i - 1]) == arr[i])
		{
			prom = i;
		}
		if (i == size - 1)
		{
			if (AverageOfTheLastElements(size - 2) == arr[size-1])
			{
				prom = i;
			}
		}
	} 
	return prom;
}

int main()
{
	double arr[SIZE], size;
	cout << "Enter size of the array:";
	cin >> size;
	cout << "Enter the elements of the array:";
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	cout << "The element is:" << HeadFunction(arr, size);
    return 0;
}