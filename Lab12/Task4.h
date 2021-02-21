#pragma once
template<class Matrix>
int min(Matrix arr, int m, int n)
{
	int min = arr[0][0];
	for (int i = 0;i != m;++i)
	{
		for (int j = 0;j != n;++j)
		{
			if (arr[i][j] < min)
			{
				min = arr[i][j];
			}
		}
	}
	return min;
}
template<class Matrix>
int max(Matrix arr, int m, int n)
{
	int max = arr[0][0];
	for (int i = 0;i != m;++i)
	{
		for (int j = 0;j != n;++j)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
			}
		}
	}
	return max;
}
template<class Matrix>
void search_min(Matrix arr, int m, int n)
{
	int count = 0;
	for (int i = 0;i != m;++i)
	{
		for (int j = 0;j != n;++j)
		{
		
			if (arr[i][j] == min(arr,m,n))
			{
				++count;
				if (count > 1)
				{
					arr[i][j] = max(arr, m, n);
				}
				
			}
		
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
}
