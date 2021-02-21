#pragma once
double max(double a, double b);
double z4(double x, double y, double z);
int main()
{
	double x;
	std::cout << "Enter x:";
	std::cin >> x;
	double y;
	std::cout << "Enter y:";
	std::cin >> y;
	double z;
	std::cout << "Enter z:";
	std::cin >> z;
	std::cout << z4(x, y, z);
	return 0;

}
