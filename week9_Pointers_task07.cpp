#include "pch.h"
#include<iostream>
using namespace std;
const int SIZE = 100;
bool func(int arr[SIZE], int n,int size) 
{
	int count = 0;

	for (int i = 0; i < size; i++) {
		if (arr[i] == n) {
			arr[i] = 0;
			count++;
		}
	}
	if (count != 0) {
		return 1;
	}
	else return 0;
}


int main() {
	int arr[SIZE], size, n;
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	cin >> n;
	cout << func(arr, n, size);
	system("pause");
	return 0;
     
}

