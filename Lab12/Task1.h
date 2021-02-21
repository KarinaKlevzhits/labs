#pragma once
template<class Matrix>
void fill_array(Matrix arr, int m, int n)
{
	for (int i = 0;i != m;++i)
	{
		for (int j = 0;j != n;++j)
		{
			std::cin >> arr[i][j];

		}

	}
}
template<class Matrix>
void create_column(Matrix arr, int m, int n)
{
	for (int i = 0;i != m * n;++i)
	{
		arr[i] = new int[n];
	}
}
template<class Matrix>
int check_the_place(Matrix arr)
{

	if (arr == NULL)
	{
		std::cout << "Error";
		system("pause");
		return 0;
	}
}
template<class Matrix>
void check_wright(Matrix arr, int m, int n)
{
	int m;
	do
	{
		std::cout << "Enter row:";
		std::cin >> m;

	} while (m < 1);
	int n;
	do
	{
		std::cout << "Enter column:";
		std::cin >> n;
	} while (n < 1);
}
template<class Matrix>
void print_array(Matrix arr, int m, int n)
{
	for (int i = 0;i != m;++i)
	{
		for (int j = 0;j != n;++j)
		{
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
}