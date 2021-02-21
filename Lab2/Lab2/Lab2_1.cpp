#include <iostream> 
#include <cmath>
void lab2_z1(double, double);
int main()
{
	double a;
	std::cout << "Enter a:";
	std::cin >> a;
	double b;
	std::cout << "Enter b:";
	std::cin >> b;	lab2_z1(a,b);
	system("pause");
	return 0;
}
void lab2_z1(double a, double b)
{

	double z1 = (std::sin(a) + std::cos(2 * b - a)) / (std::cos(a) - std::sin(2 * b - a));
	double z2 = ((1 + std::sin(2 * b)) / (std::cos(2 * b)));
	std::cout <<"Z1:"<< z1 << std::endl;
	std::cout <<"Z2:"<< z2 << std::endl;
}