#include <iostream>
template <class Matrix>
void fill_array(Matrix arr, int row, int column)
{
	if (arr == NULL)
	{
		std::cout << "Error";
		system("pause");

	}
	for (int i = 0;i != row;++i)
	{
		
		arr[i] = new double[column];
	
	}
	for (int i = 0;i != row;++i)
	{
		for (int j = 0;j != column;++j)
		{
			std::cin >> arr[i][j];
		}
	}
	for (int i = 0;i != row;++i)
	{
		for (int j = 0;j != column;++j)
		{
			std::cout << arr[i][j] << ';';
		}
		std::cout << std::endl;
	}
}
int main()
{
	int row;
	do
	{
		std::cout << "Enter row:";
		std::cin >> row;
	} 
	while (row < 1);
	int column;
	do
	{
		std::cout << "Enter column:";
		std::cin >> column;
	}
	while (column <1);
	double** arr = new double* [row];
	fill_array(arr, row, column);
}
