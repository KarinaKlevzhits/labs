#include <iostream>
#include <cmath>
#include "Header.h"
double z1(double t, double x);
int main()
{
	double t;
	std::cout << "Enter t:";
	std::cin >> t;
	double x;
	std::cout << "Enter x:";
	std::cin >> x;
	std::cout << z1(t, x)<<std::endl;
	system("pause");
	return 0;
}

