#pragma once
void task3()
{
	
	std::cout << "Enter elements" << std::endl;
	const int size = 10;
	int arr[size]{};
	for (int i = 0;i < size;++i)
	{
		std::cin >> arr[i];
	}
	std::cout << "array already" << std::endl;
	for (int i = 0;i < size;++i)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
	std::cout << "Eements even and positive" << std::endl;
	for (int i = 0;i != size;++i)
	{
		if (arr[i] % 2 == 0 && arr[i] > 0)
		{
			std::cout << arr[i] << " ";
		}
	}
}