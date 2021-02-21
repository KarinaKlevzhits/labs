#pragma once
void task6()
{
	size_t value;
	std::cout << "Enter value:";
	std::cin >> value;
	std::cout << "Enter elements" << std::endl;
	int* arr = new int[value];
	for (int i = 0;i != value;++i)
	{
		std::cin >> arr[i];
	}
	std::cout << "array already" << std::endl;
	for (int i = 0;i != value;++i)
	{
		std::cout << "vector[" << i << "]=" << arr[i] << std::endl;
	}
	std::cout << std::endl;
	for (int i = 0;i != value;++i)
	{
		if (arr[i] % 5 == 0)
		{
			std::cout << 1200 / arr[i] << " ";
		}
	}
}