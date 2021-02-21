#pragma once
template <class Matrix>
int index_positive(Matrix arr, int row, int column)
{

	for (int i = 0;i != row;++i)
	{
		for (int j = 0;j != column;++j)
		{
			if (arr[i][j] > 0)
			{
				return i;
			}
		}
	}

}
template <class Matrix>

