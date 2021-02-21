#include <iostream>
#include <cmath>
#include "z1.h"
int main()
{

	int arr[2][3]{ {1,2,7},
				   {1,7,6} };
	std::cout << z1(arr, 2, 3);
}