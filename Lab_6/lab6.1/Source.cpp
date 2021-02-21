#include <iostream>
#include <cmath>
#include <ctime>
bool polindrom(int* arr,const int size)
{

	for (int i = 0, j = size-1;i !=j;++i, --j)
	{
		if (arr[i]!= arr[j])
		{
			return false;
		}
	}
	return true;
}
int mul_even_elements(int* arr, const int  size)
{
	int mul = 1;
	for (int i = 0;i < size;++i)
	{
		if (arr[i] % 2 == 0)
		{
			mul *= arr[i];
		}
	}
	return mul;
}
int mul_even_num(int* arr, const int  size)
{
	int sum = 0;
	for (int i = 0;i < size;++i)
	{
		if (i% 2 == 0)
		{
			sum += arr[i];
		}
	}
	return sum;
}
bool prime(int a)
{
	for (int i = 2;i<sqrt(a);++i)
	{
		if (a % i == 0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	const int size = 10;
	int arr[size]{ 1,2,3,4,5,6,7,8,9,0 };

	
}