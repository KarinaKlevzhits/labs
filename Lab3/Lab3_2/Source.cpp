#include <iostream>
#include <cmath>
#include "Procent.h"
double procent(double m, double x)
{
	if (m == 6)
	{
		return (((x * 6.0 * 180) / 365.0) / 100.0) / 6.0;
	}
	else if (m == 12)
	{
		return (((x * 8.0 * 365) / 365.0) / 100.0) / 12;
	}
	else
	{
		return 0;
	}
}
