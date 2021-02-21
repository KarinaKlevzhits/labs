#pragma once
double z1(double t, double x)
{
	double t2;
	if (3 * t <= x && x < 10 * t)
	{
		std::cout << "Line for 3*t less  than or equal x and x less than 10*t " << std::endl;
		return t2 = std::sqrt(std::abs((x * std::exp(std::sin(x))) + (t * std::exp(-2 * x))));
	}
	else if (x >= 10 * t)
	{
		std::cout << "If x more than or equal for 10*t" << std::endl;
		return t2 = std::sqrt(std::abs(x + t) * (std::exp(std::cos(x))));
	}
	return 0;
}

