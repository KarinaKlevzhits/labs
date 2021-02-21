#pragma once
void z1(int m)
{
	int result = 0;
	for (int n = 1;n < 1000;++n)
	{
		result = std::pow(n - m, 2);
		std::cout << result << ",";
	}
}