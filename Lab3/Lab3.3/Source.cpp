#include <iostream>
#include <cmath>
#include "Z3.h"
double equation(double n, double k, double m, double z)
{
	if (z > 1)
	{
		std::cout << "If z>1:";
		return std::sin(n * (std::exp(z) + z)) + std::cos(k * (std::exp(z) + z)) + std::log(m * (std::exp(z) + z));
	}
	else if (z <= 1)
	{
		std::cout << "If z<=1:";
		return std::sin(n * (std::pow(z, 2) + 1)) + std::cos(k * (std::pow(z, 2) + 1)) + std::log(m * (std::pow(z, 2) + 1));
	}
}