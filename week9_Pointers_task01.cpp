#include "pch.h"
#include <iostream>
using namespace std;
void SwapNumbers(int &first, int &second)
{
	int temp = first;
	first = second;
	second = temp;
	cout << first << " " << second << endl;
}
int main()
{
	int first, second;
	cout << "Enter two numbers:";
	cin >> first >> second;
	SwapNumbers(first, second);
	return 0;

}