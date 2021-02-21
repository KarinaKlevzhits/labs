#include <iostream>
#include <ctime>
template <class Matrix>
void task3(Matrix arr, int row, int column)
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
	for (int i = 0;i != row;++i)
	{
		for (int j = 0;j != column;++j)
		{
			arr[i][j] = -95 + rand() % 15;
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
	std::cout << "Print reverse:" << std::endl;
	for (int i = row-1 ;i >= 0;--i)
	{
		for (int j = column-1 ;j >= 0;--j)
		{
			std::cout << arr[i][j] << "|";
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
	task3(arr, row, column);
}