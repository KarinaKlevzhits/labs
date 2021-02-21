#include "z6.h"
bool z7_a(double x)
{
	return x<100 && x>-100;
}
bool z7_b(double y)
{
	return y < 100 || y>101;
}
bool z7_c(double x,int a,int b)
{
	return x != a || x != b;
}
