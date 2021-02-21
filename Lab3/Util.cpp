#include "Util.h"
double d_x(double x, double y, BP first, BP second, BP third, F f)
{
	if (first(x, y))
	{
		return std::pow((std::abs(f(x) - y)), 1.0 / 3.0) + std::tan(f(x));
	}
	else if (second(x, y))
	{
		return std::pow((y - f(x)), 3) + std::cos(f(x));
	}
	else if (third(x, y))
	{
		return std::pow((f(x) + y), 2) + pow(x, 3);
	}

}
double menu()
{

	int p;
	std::cout << "1-sh(x),2-pow(x,2),3-exp(x)" << std::endl;
	std::cin >> p;
	double x;
	std::cout << "Enter x:" << std::endl;
	std::cin >> x;
	std::cout << "Enter y:" << std::endl;
	double y;
	std::cin >> y;
	switch (p)
	{
	case 1:

		return d_x(x, y, first, second, third, sh);
	case 2:

		return d_x(x, y, first, second, third, pow_x);

	case 3:
		return d_x(x, y, first, second, third, ex);
	default:
		return 0;
	}

}