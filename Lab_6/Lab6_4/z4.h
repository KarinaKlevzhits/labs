#pragma once
void task4()
{
	const int size = 10;
	std::cout << "Enter elements" << std::endl;
	int arr[size]{};
	for (int i = 0;i < size;++i)
	{
		std::cin >> arr[i];
	}
	std::cout << "array already" << std::endl;
	for (int i = 0;i < size;++i)
	{
		std::cout << "arr[" << i << "]=" << arr[i] << std::endl;
	}
	std::cout << std::endl;
	for (int i = 0;i != size;++i)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			std::cout << arr[i] << " ";
		}

	}
}
