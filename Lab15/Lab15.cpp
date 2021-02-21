#include <iostream>
#include <string>
#include "Watch.h"
#include <vector>
int main()
{
	HandWatch gucci{5, 6.7, 'b', "byrhyrh", { 1,2,3,4,5,6,7,8,9,10 }};
	HandWatch apple;
	apple.size = 6;
	apple.price = 9.8;
	apple.name = 'p';
	apple.is_broken = true;
	apple.info = "k";
	apple.values = { 1,2,3 };
	std::cout << std::endl;
	std::cout << apple.size << '|' << apple.price << '|' << apple.name << '|' << apple.is_broken << '|' << apple.info << '|';
	std::cout << std::endl;
	HandWatch luch;
	luch.size ;
	std::cout << "Size:";
	std::cin >> luch.size;
	luch.price;
	std::cout << "Price:";
	std::cin >> luch.price;
	luch.name ;
	std::cout << "Name:";
	std::cin >> luch.name;
	luch.is_broken;
	std::cout << "Broken?:";
	std::cin >> luch.is_broken;
	luch.info;
	std::cout << "Info:";
	std::cin >> luch.info;
	luch.fill_values(luch);
	std::cout << std::endl;
	std::cout << luch.size << '|' << luch.price << '|' << luch.name << '|' << luch.is_broken << '|' << luch.info << '|';
	HandWatch *rolex=&apple;
	rolex->size = 5;
	rolex->price = 7.8;
	rolex->name = 'o';
	rolex->is_broken = true;
	rolex->info = "k";
	for (int i = 0;i != 10;++i)
	{
		rolex->values[i] = i;
		std::cout << rolex->values[i] << '|';
	}
	std::cout << rolex->size << '|' << rolex->price << '|' << rolex->name << '|' << rolex->is_broken << '|' << rolex->info << '|';
	HandWatch &rocket=apple;
	rocket.size;
	rocket.price;
	rocket.name ;
	rocket.is_broken;
	rocket.info;
	rocket.values;
	std::cout << std::endl;
	std::cout <<rocket.size << '|' << rocket.price << '|' << rocket.name << '|' << rocket.is_broken << '|' <<rocket.info<< '|';

}