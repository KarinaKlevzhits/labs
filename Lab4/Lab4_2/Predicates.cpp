#include "Predicates.h"
#include <iostream>
bool first(double x, double b)
{
	return 0.7 < x * b;
}
bool second(double x, double b)
{
	return 0.1 < x * b;
}
bool third(double x, double b)
{
	return 0.7 >= x * b;
}
