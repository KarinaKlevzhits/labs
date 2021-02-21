#pragma once
double equation(double n, double k, double m, double z);
int main()
{
	double n;
	std::cout << "Enter n:";
	std::cin >> n;
	double k;
	std::cout << "Enter k:";
	std::cin >> k;
	double m;
	std::cout << "Enter m:";
	std::cin >> m;
	double z;
	std::cout << "Enter z:";
	std::cin >> z;
	std::cout << equation(n, k, m, z);
	return 0;
}