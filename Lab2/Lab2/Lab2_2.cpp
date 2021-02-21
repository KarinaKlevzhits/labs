#include<iostream>
#include<cmath>
double labz2(double, double, double);
int main()
{
	double x; 
	double y;
	double z;
	std::cout << "Enter x:";
    std::cin >> x;
	std::cout << "Enter y:";
	std::cin >> y;
	std::cout << "Enter z:";
	std::cin >> z;
	std::cout<<labz2(x,y,z)<<std::endl;
	system("pause");
	return 0;
}
double labz2(double x, double y, double z)
{
	double s = std::abs(x - y) * (std::pow(std::sin(z), 2) + std::tan(z));
	if (s ==0)
	{
		return 0;
	}
	double t = std::pow(y + std::pow(x - 1, 1 / 3.0), 1 / 4.0);
	double f = t / s;
	return f;
}