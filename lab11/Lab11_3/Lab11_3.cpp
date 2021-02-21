#include <iostream>
#include<cmath>
void equation(double xn,double xk,double h)
{
	for (;xn != xk;xn+=h)
	{
		if (xn <= 2)
		{
			std::cout << std::exp(pow(xn, 2) - (xn + 1.0 / 3.0 - xn)) << '|';
		}
		else if (xn > 2)
		{
			std::cout << std::pow(sin(pow(xn - 1,2)), 3)<<'|';
		}
	}
}
int main()
{
	int xn;
	std::cin >> xn;
	int xk;
	std::cin >> xk;
	int h;
	std::cin >> h;
	equation(xn, xk, h);
}