#include "pch.h"
#include <iostream>
using namespace std;
void absFunc(double number)
{
	if ( number >=0)
	{
		cout << number << endl;
	}
	if (number<0)
	{
		cout << number * (-1) << endl;
	}
}
double power(double number, double SecNumber)
{
	double result= 1;
    for (int i = 0; i < SecNumber; i++)
	{
			result = result * number;
	}
	return result;
}
double minimum(double &number3, double &number4)
{
	if (number3<number4)
	{
		return number3;
	}
	if (number3>number4)
	{
		return number4;
	}
}
double maximum(double& number3, double& number4)
{
	if (number3 > number4)
	{
		return number3;
	}
	if (number3 < number4)
	{
		return number4;
	}
}
double minOf3(double &number3, double &number4, double number5)
{
	if (minimum(number3,number4)<number5)
	{
		return minimum(number3, number4);
	}
	if (minimum(number3,number4)>number5)
	{
		return number5;
	}
}
double maxOf3(double &number3, double &number4, double &number5)
{
	if (maximum(number3,number4)>number5)
	{
		return maximum(number3, number4);
	}
	if (maximum(number3,number4)<number5)
	{
		return number5;
	}
}
void isAlpha(char symbol)
{
	if ((symbol>=65 && symbol<=90) || (symbol>=97&&symbol<=122))
	{
		cout << "The character is alphabetic" << endl;
	}
	else
	{
		cout << "The character is not alphabetic" << endl;
	}
}
void isDigit(char digit)
{
	if (digit>=48 && digit<=57)
	{
		cout << "The character is a digit" << endl;
	}
	else
	{
		cout << "The character is not a digit" << endl;
	}
}
int main()
{
	double number;
	cout << "Enter a number: ";
	cin >> number;
	cout << "The module of the number is: ";
	absFunc(number);
	double SecNumber;
	cout << "Enter one more number: ";
	cin >> SecNumber;
	if (SecNumber >= 0)
	{
		cout << "The result from the first on power the second is: " << power(number, SecNumber) << endl;
	}
	if (SecNumber < 0)
	{
		cout << "The result from the first on power the second is: " <<"1/"<< power(number, SecNumber) << endl;
	}
    double number3, number4;
	cout << "Enter two more numbers:";
	cin >> number3 >> number4;
	cout << "The smaller one of both is: " << minimum(number3, number4) << endl;
	cout << "The larger of both is: " << maximum(number3, number4) << endl;
	double number5;
	cout << "Enter one new number: ";
	cin >> number5;
	cout << "The smallest of the three number is:" << minOf3(number3, number4, number5) << endl;
	cout << "The largest of the three numbers is:" << maxOf3(number3, number4, number5) << endl;
	char symbol;
	cout << "Enter a character:";
	cin >> symbol;
	isAlpha(symbol);
	char digit;
	cout << "Enter a character:";
	cin >> digit;
	isDigit(digit);
	return 0;
}


