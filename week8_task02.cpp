#include "pch.h"
#include <iostream>
#include<cmath>
using namespace std;
int H(int a, int b, int n)
{
	int h = (b - a) / n;
	return h;
}
int funk(int X)
{
	return pow(X, 3) - 5 * X;
}
void End(int a, int b, int n)
{
	int X = a + H(a, b, n);
}

int main()
{
	
	return 0;
}

