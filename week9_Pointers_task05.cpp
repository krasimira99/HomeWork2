#include "pch.h"
#include <iostream>
using namespace std;
const int SIZE = 100;
void funk(char *arr, int size)
{ 
	char del = 'e', del1 = 'a', del2 = 'o', del3 = 'y';
	int	count=0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == del && arr[i]==del1 && arr[i]==del2 && arr[i]==del3)
		{
			for (int j = i; j < (size - 1); j++)
			{
				arr[j] = arr[j + 1];
			}
			count++;
			break;
		}
	}
	if (count == 0)
	{
		cout << "Element not found..!!";
	}
	else
	{
		cout << "Element deleted successfully..!!\n";
		cout << "Now the new array is :\n";
		for (int i = 0; i < (size - 1); i++)
		{
			cout << arr[i] << " ";
		}
	}
}
int main()
{
	char arr[SIZE], del;
	int size;
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	funk(arr, size);
	return 0;

}
