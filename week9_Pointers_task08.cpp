#include "pch.h"
#include<iostream>
using namespace std;
const int SIZE = 100;
int *func(int arr[SIZE], int n, int size) 
{
	for (int i = 0; i < size; i++) 
	{
		if (arr[i] == n) 
		{
			return &arr[i];
		}
		else return NULL;
	}
}


int main() 
{
	int arr[SIZE], n, size;
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	cin >> n;
	cout << func(arr, n,size);
	system("pause");
	return 0;
}