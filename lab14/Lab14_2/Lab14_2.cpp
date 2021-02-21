#include <iostream>
double mul_rec(int a, int b,int p_a)
{
	
	if (b == 0)
	{
		return 0;
	}
	if (p_a == 0)
	{
		return 1;
	}
	if (b % 2 == 0)
	{
		return 2 * (a * b) / 2*mul_rec(a,b,p_a-1);
	}
	else if (b % 2 != 0)
	{
		return a + (a * (b - 1)) * mul_rec(a, b, p_a - 1);
	}
}
int factorial(int n)
{
	if (n == 0)
	{
		return 1;
	}
	return n * factorial(n - 1);
}
int print(int* first, int* last)
{
	if (first == last)
	{
		return *(first);
	}
	std::cout << *(first);
	return print(first + 1,last);
}
int sum_arr(int* first, int* last)
{
	if (first = last - 1)
	{
		return *first;
	}
	return (*first) + sum_arr(first + 1, last);
}
int main()
{
	int arr[5]{ 1,2,3,4,5 };
	//std::cout << mul_rec(3, 5, 1);
	//std::cout << factorial(3);
	//std::cout << print(arr, arr + 4);
	std::cout << sum_arr(arr, arr + 4);
}
