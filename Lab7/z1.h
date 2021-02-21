#pragma once
template <class Matrix>
int z1(Matrix arr, const int n, int m)
{
	int count = 0;
	for (int i = 0;i < n * m;++i)
	{
		if (arr[0][i] == 7)
		{
			++count;
		}
	}
	return count;
}
