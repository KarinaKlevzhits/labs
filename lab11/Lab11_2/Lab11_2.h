#pragma once
int sum(int* first, int* last)
{
	int sum = 0;
	for (;first != last;++first)
	{
		if (*first % 4 == 0)
		{
			sum += *first;
		}
	}
	return sum;
}
int mull(int* first, int* last)
{
	int mull = 1;
	for (;first != last;++first)
	{
		if (*first % 4 == 0)
		{
			mull *= *first;
		}
	}
	return mull;
}
int value_positive(int* first, int* last)
{
	int count = 0;
	for (;first != last;++first)
	{
		if (*first > 0)
		{
			++count;
		}
	}
	return count;
}
