#pragma once
template <class Matrix>
int check_the_place(Matrix arr)
{

	if (arr == NULL)
	{
		std::cout << "Error";
		system("pause");
		return 0;
	}
}
template <class Matrix>
void create_column(Matrix arr, int row, int column)
{
	for (int i = 0;i != row;++i)
	{
		arr[i] = new char[column];
	}
}
template <class Matrix>
void fill_matrix(Matrix arr, int row, int column)
{
	for (int i = 0;i != row;++i)
	{
		for (int j = 0;j != column;++j)
		{
			std::cin >> arr[i][j];

		}

	}
}
template <class Matrix>
void print_array(Matrix arr, int row, int column)
{
	for (int i = 0;i != row;++i)
	{
		for (int j = 0;j != column;++j)
		{
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
}
