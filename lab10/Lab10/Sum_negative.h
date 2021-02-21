#pragma once
int sum_negative(int* first, int* last, int sum)
{

	for (;first != last;++first)
	{
		if (*first < 0)
		{
			sum += *first;
		}
	}
	return sum;
}
