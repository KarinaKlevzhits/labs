#include "Utill.h"
#pragma once
#include <iostream>
#include <cmath>
#include "Predicates.h"
#include "Function.h"
double g(double x, double b, BP first, BP second, BP third, F f)
{
	if (first(x, b))
	{
		return exp(f(x) - abs(b));
	}
	else if (second(x, b))
	{
		return sqrt(abs(f(x)) + (2 * b));
	}
	else if (third(x, b))
	{
		return 3 * std::pow(f(x), 2);
	}
}
double menu()
{
	int p;
	std::cout << "1-exp(x),2-pow(x):";
	std::cin >> p;
	double x;
	std::cout << "Enter x:";
	std::cin >> x;
	std::cout << "x=" << x << std::endl;
	double b;
	std::cout << "Enter b:";
	std::cin >> b;
	std::cout << "b=" << b << std::endl;
	switch (p)
	{
	case 1:
		std::cout << "f(x)=exp(x)" << std::endl;
		return g(x, b, first, second, third, ex);

	case 2:
		std::cout << "f(x)=pow(x,2)" << std::endl;
		return g(x, b, first, second, third, pow_x);

	default:
		return 0;
	}
}