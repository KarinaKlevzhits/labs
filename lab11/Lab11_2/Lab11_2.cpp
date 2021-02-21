#include <iostream>
#include "Lab11_2.h"
int main()
{
	int arr[10]{ 1,2,3,4,5,6,7,8,9,16 };
	std::cout << sum(arr, arr + 10)<<std::endl;
	std::cout << mull(arr, arr + 10)<<std::endl;
	std::cout << value_positive(arr, arr + 10) << std::endl;;
}