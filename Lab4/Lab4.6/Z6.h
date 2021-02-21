#pragma once
#include <iostream>
#include <cmath>
bool z2_a(int x, int y);
bool z2_b(int x, int y);
bool z2_c(int x, int y);
bool z2_d(int x, int y);
bool z2_e(int x, int y);
int main()
{
	int x;
	std::cout << "Enter x";
	std::cin >> x;
	int y;
	std::cout << "Enter y:";
	std::cin >> y;
	//std::cout << z2_a(x, y);
	//std::cout << z2_b(x, y);
	//std::cout << z2_c(x, y);
	//std::cout << z2_d(x, y);
	std::cout << z2_e(x, y);
}
