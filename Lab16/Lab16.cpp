#include <iostream>
#include <string>
#include "HandWatch_and_noter.h"
int main()
{
	const int size = 3;
	HandWatch luch[size]{ };
	for (int i = 0;i != size;++i)
	{
		std::cout << "Size:";
		std::cin >> luch[i].size;
		std::cout << std::endl;
		std::cout << "Price:";
		std::cin >> luch[i].price;
		std::cout << std::endl;
		std::cout << "Name:";
		std::cin >> luch[i].name;
		std::cout << std::endl;
		std::cout << "Broken?:";
		std::cin >> luch[i].is_broken;
		std::cout << std::endl;
		std::cout << "Info:";
		std::cin >> luch[i].info;
		std::cout << std::endl;
		std::cout << "Values:";
		std::cin >> luch[i].values[i];
		std::cout << std::endl;
		std::cout << luch[i].size << '|' << luch[i].price << '|' << luch[i].name << '|' << luch[i].is_broken << '|' << luch[i].info << '|'<<luch[i].values[i];
	}
	std::cout << std::endl;
	int count = 0;
	int x;
	std::cout << "Enter x:";
	std::cin >> x;
	std::cout << luch[0].counter_x(luch, x, 3);
	int n;
	std::cin >> n;
	HandWatch* apple = new HandWatch[n];
	for (int i = 0;i != n;++i)
	{
		std::cout << "Size:";
		std::cin >> luch[i].size;
		std::cout << std::endl;
		std::cout << "Price:";
		std::cin >> luch[i].price;
		std::cout << std::endl;
		std::cout << "Name:";
		std::cin >> luch[i].name;
		std::cout << std::endl;
		std::cout << "Broken?:";
		std::cin >> luch[i].is_broken;
		std::cout << std::endl;
		std::cout << "Info:";
		std::cin >> luch[i].info;
		std::cout << std::endl;
		std::cout << "Values:";
		std::cin >> luch[i].values[i];
		std::cout << std::endl;
		std::cout << luch[i].size << '|' << luch[i].price << '|' << luch[i].name << '|' << luch[i].is_broken << '|' << luch[i].info << '|' << luch[i].values[i];
	}
	const int k = 3;
	NOTE noter[k]{};
	for (int i = 0;i != k;++i)
	{
		
		std::cout << "Name:";
		std::cin >> noter[i].name;
		std::cout << "Number:";
		std::cin >> noter[i].number;
		std::cout << "Date:";
		std::cin >> noter[i].date[i];
		std::cout << noter[i].name << ';' << noter[i].number << ';' << noter[i].date[i];
		std::cout << std::endl;
		
	}

	long long int number2;
	std::cin >> number2;
	noter[k].number_vs_number(noter, number2,k);
	
}