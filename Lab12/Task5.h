#pragma once
template<class Matrix>
double arifm_medium(Matrix arr,int m,int n)
{
	double sum = 0;
	for (int i = 0;i != m;++i)
	{
		for (int j = 0;j != n;++j)
		{
			sum += arr[i][j];
		}
	}
	return sum / (m * n);
}
template<class Matrix>
double value_less_than_arif(Matrix arr, int m, int n)
{
	int count = 0;
	for (int i = 0;i != m;++i)
	{
		for (int j = 0;j != n;++j)
		{
			if (arr[i][j] < arifm_medium(arr, m, n) && i % 2 == 0)
			{
				++count;
			}
		}
	}
	return count;
}