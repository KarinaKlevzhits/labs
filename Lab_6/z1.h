#pragma once
void task1()
{
	const int size = 14;
	int sum = 0;
	int count = 0;
	int arr[size]{};
	std::cout << "Enter elements of array" << std::endl;
	for (int i = 0;i != size;++i)
	{

		std::cin >> arr[i];
	}
	for (int i = 0;i != size;++i)
	{
		std::cout << arr[i] << " ";
		if (arr[i] % 2 == 0 && arr[i] > 0)
		{
			++count;
			sum += arr[i];

		}
	}
	std::cout << "Array already" << std::endl;
	std::cout << "Value of even and positive:" << count << std::endl;
	std::cout << "Sum of even and positive:" << sum << std::endl;
}
