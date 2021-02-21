#pragma once
#include <cmath>
double procent(double m, double x);
int main()
{
	double m;
	std::cout << "Enter value of month(6 or 12):";
	std::cin >> m;
	double x;
	std::cout << "Enter value of money(BLR):";
	std::cin >> x;
	std::cout << procent(m, x);
	return 0;

}
