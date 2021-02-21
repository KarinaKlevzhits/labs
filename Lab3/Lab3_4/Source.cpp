#include <iostream>
#include <cmath>
#include "Z4.h"
double max(double a, double b)
{
	if (a > b)
	{
		return a;
	}
	return b;
}
double z4(double x, double y, double z)
{
	if (x != 0 && y != 0 && z != 0)
	{
		double numerator = max(x + y + z, x * y * z);
		double denominator = max(x + y + z, x / (y * z));
		return numerator / denominator;
	}
	else
	{
		std::cout << "Error";
	}

}
