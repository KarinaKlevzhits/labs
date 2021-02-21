#include <iostream>
#include <cmath>
#include <ctime>
template<class Matrix>
void task4(Matrix arr,int row, int column)
{
	srand(time(NULL));
	if (arr == NULL)
	{
		std::cout << "Error";
		system("pause");

	}
	for (int i = 0;i != row;++i)
	{
			arr[i] = new int[column];
	}
	int k = 5;
	for (int i = 0;i != row;++i)
	{
		for (int j = 0;j != column;++j)
		{
			arr[i][j] = k;
			k+=35;
		}
	}
	std::cout << "Print array:" << std::endl;
	for (int i = 0;i != row;++i)
	{
		for (int j = 0;j != column;++j)
		{
			std::cout << arr[i][j] << "|";
		}
		std::cout << std::endl;
	}
	std::cout << "Print new array:" << std::endl;
	for (int i =0;i!=row;++i)
	{
		for (int j =0;j!=column;++j)
		{
			arr[i][j] = std::pow(arr[i][j], 3);
			std::cout << arr[i][j] << " ";
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
	int** arr = new int*[row];
	task4(arr, row, column);
}