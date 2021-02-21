#pragma once
template<class Matrix>
bool negative_main_diagonal(Matrix arr, int size)
{
	int sum = 0;
	for (int i = 0;i != size;++i)
	{
		sum += arr[i][i];
		if (sum < 0)
		{
			return true;
		}
	}
	return false;
}
