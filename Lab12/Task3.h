#pragma once
#include "Task1.h"
template<class Matrix>
int mull_elements(Matrix arr, int m, int n)
{
	int mull = 1;
	for (int i = 0;i != m;++i)
	{
		for (int j = 0;j != n;++j)
		{
			if (i != j && (i != 0 && j != 0 && i != m - 1 && j != n - 1))
			{
				mull *= arr[i][j];
			}
		}
	}
	return mull;
}
