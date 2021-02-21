#pragma once
#include <cmath>
#include "Task1.h"
template <class Matrix>
double sum_sqrt(Matrix arr, int m, int n)
{
	double sum = 0;
	for (int i = 0;i != m;++i)
	{
		for (int j = 0;j != n;++j)
		{
			if (i == j)
			{
				sum += std::sqrt(arr[i][j]);
			}
		}
	}
	return sum;
}
