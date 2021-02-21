#include "Z6.h"
bool z2_a(int x, int y)
{
	return x == 2 && y == 13;
}
bool z2_b(int x, int y)
{
	return x == 2 || y == 13;
}
bool z2_c(int x, int y)
{
	return x == 2 ^ y == 13;
}
bool z2_d(int x, int y)
{
	return ~x;
}
bool z2_e(int x, int y)
{
	return x < y;
}
