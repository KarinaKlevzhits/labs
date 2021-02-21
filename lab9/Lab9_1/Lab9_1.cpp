#include <iostream>
#include "task1.h"
int main()
{
	int row;
	do
	{
		std::cin >> row;
	} 
	while (row < 1);
	int column;
	do
	{
		std::cin >> column;
	} 
	while (column < 1);
	char** arr = new char*[row];
	check_the_place(arr);
	create_column(arr, row, column);
	fill_matrix(arr, row, column);
	print_array(arr, row, column);
}
