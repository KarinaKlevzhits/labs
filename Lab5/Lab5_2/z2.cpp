#include <iostream>
#include <cmath>
#include "z2.h"
double y(double x);
double factorial(int n);
double s(double x, int n);
void z2(double x, double n);
int main()
{
	int x;
	std::cout << "Eter x:";
	std::cin >> x;
	int n;
	std::cout << "Enter n:";
	std::cin >> n;
	z2(x,n);
}