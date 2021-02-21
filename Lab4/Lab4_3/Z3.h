#pragma once

void sort(int a)
{
	if (a > 25 || a == 14)
	{
		std::cout << "Number" << " " << a << " " << "is A group" << std::endl;

	}
	if (a % 2 == 0 && a < 0)
	{
		std::cout << "Number" << " " << a << " " << "is B group" << std::endl;

	}
	if (a > 0 && a % 3 == 0)
	{
		std::cout << "Number" << " " << a << " " << "is C group" << std::endl;

	}
	else
	{
		std::cout << "Number" << " " << a << " " << "is D group" << std::endl;

	}
}
