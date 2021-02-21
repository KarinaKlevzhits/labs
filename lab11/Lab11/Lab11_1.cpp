#include <iostream>
#include "Lab11_1.h"
int main()
{
	double arr[5][5]{{1.2,3,4,5,8.0},
					{1,2,3,4,5},
					{1,2,3,4,5},
					{1,2,3,4,5},
					{1,2,3,4,5} };
	std::cout << negative_main_diagonal(arr, 5);
}