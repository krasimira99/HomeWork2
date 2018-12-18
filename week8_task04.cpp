#include "pch.h"
#include <iostream>
using namespace std;
bool isPrime(int &number)
{
	for (int i = 2; i <= number / 2; i++)
	{
		if (number % i == 0)
		{
			return false;
		}
	}
	return true;
}
bool isPaired(int &A, int &B)
{
	if (isPrime(A) && isPrime(B) && A + 2 == B )
	{
		return true;
	}
	else return false;

}

int main()
{
	int FirstNumber, SecNumber;
	cout << "Enter two numbers: ";
	cin >> FirstNumber >> SecNumber;
	if (isPaired(FirstNumber,SecNumber))
	{
		cout << "The numbers are paired prime numbers" << endl;
	}
	else
	{
		cout << "The numbers are not paired prime numbers" << endl;
	}
	return 0;
}

