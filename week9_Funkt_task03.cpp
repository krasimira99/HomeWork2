#include "pch.h"
#include <iostream>
using namespace std;
const int SIZE = 100;
void Fact(int *number)
{
	int result = 1;
	for (int i = 1; i <= *number; i++)
	{
		result *= i;
	}
	cout << result << endl;
}
int main()
{
	int arr[SIZE], size;
	cout << "Enter size of array:";
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
		cout <<arr[i]<< "-->";
		Fact(&arr[i]);
	}
	
}

