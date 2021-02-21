#include<iostream>
#include<cmath>
void labz3(double a) {
	double h = (std::sqrt(3) / 2) * a;
	std::cout << h;
}
int main()
{
	double a;
	std::cout << "Enter a: ";
	std::cin >> a;
	labz3(a);
	system("pause");
	return 0;
}