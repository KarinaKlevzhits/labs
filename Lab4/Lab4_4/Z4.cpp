#include <iostream>
#include <cmath>
#include "Z4.h"
void job(int zp, int p);
int main()
{
	int zp;
	std::cout << "Enter zp: ";
	std::cin >> zp;
	std::cout << "Jobs,which salary not less than " << " " << zp << std::endl;
	job(zp, 1);
	system("pause");
}
	
