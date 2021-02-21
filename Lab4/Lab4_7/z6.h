#pragma once
#include <iostream>
#include <cmath>
bool z7_a(double x);
bool z7_b(double y);
bool z7_c(double x, int a, int b);
int main()
{
	double x;
	std::cout << "Enter x:";
	std::cin >> x;
	double y;
	std::cout << "Enter y:";
	std::cin >> y;
	double a;
	std::cout << "Enter a:";
	std::cin >> a;
	double b;
	std::cout << "Enter b:";
	std::cin >> b;
	std::cout << z7_a(x);
	std::cout << z7_b(y);
	std::cout << z7_c(x, a, b);
	system("pause");
	return 0;
}
