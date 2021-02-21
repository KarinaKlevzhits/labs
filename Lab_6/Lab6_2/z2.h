#pragma once
void task2(char* arr,const int size)
{
	for (int i = 0;i != size;++i)
	{
		std::cout << arr[i] << " ";

	}
	std::cout << std::endl;
	for (int i = 0;i != size;++i)
	{
		std::cout << arr[i] << arr[i] << arr[i] << " ";
	}
}
