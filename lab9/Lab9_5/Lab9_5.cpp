#include <iostream>
#include <ctime>
template <class Matrix>
void task5(Matrix arr, int row, int column)
{
	srand(time(NULL));
	for (int i = 0;i != row;++i)
	{
			arr[i] = new double[column];
	}
	for (int i = 0;i != row;++i)
	{
		for (int j = 0;j != column;++j)
		{
			arr[i][j] = (rand() % 1000)*0.1;
		}
	}
	std::cout << "Print array:" << std::endl;
	for (int i = 0;i != row;++i)
	{
		for (int j = 0;j != column;++j)
		{
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
	std::cout << "Print new array";
	for (int i = 0;i != row;++i)
	{
		for (int j = 0;j != column;++j)
		{
			if ((i >= 2 && i <= 4) && (j>=2 && j <= 4))
			{
				std::cout << arr[i][j] << " ";
			}
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
	while (column < 1);
	double** arr = new double* [row];
	task5(arr, row, column);


}