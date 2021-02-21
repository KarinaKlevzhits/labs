#pragma once
double y(double x)
{
	return (1 - std::pow(x, 2) / 2) * std::cos(x) - x / 2 * std::sin(x);
}
double factorial(int n)
{
	int comp = 1;
	for (int i = 1; i <= n; ++i)
	{
		comp *= i;
	}
	return comp;
}
double s(double x, int n)
{

	double result = 0;
	for (double k = 0; k <= n; ++k)
	{
		result += std::pow((-1), k) * (2 * std::pow(k, 2) + 1 / factorial(2 * k)) * std::pow(x, 2 * k);
	}
	return result;
}
void z2(double x, double n)
{
	double subb = 0;
	for (int x = 0; x <= n; ++x)
	{
		subb = y(x) - s(x, n);
		std::cout << x << " " << s(x, n) << " " << y(x) << " " << subb << std::endl;
	}
}

