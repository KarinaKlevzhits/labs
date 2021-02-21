#pragma once
using F = double(*)(double);
using BP = bool(*)(double, double);
double menu();
double g(double x, double b, BP first, BP second, BP third, F f);
