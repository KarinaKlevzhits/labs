#include <iostream>
#include <string>
#include <vector>

struct HandWatch
{
	int size;
	double price;
	char name;
	bool is_broken;
	std::string info;
	std::vector<int> values;
	
};


int main()
{
	HandWatch gucci{ 5, 6.7, 'b', 1,"byrhyrh", { 1,2,3,4,5} };
	std::cout << gucci.size << '|' << gucci.price << '|' << gucci.name << '|' << gucci.info  ;
	std::cout << gucci.values.size();
	for (int i = 0;i!=gucci.values.size();++i)
	{
		std::cout << gucci.values[i] ;
	}
	HandWatch apple;
	apple.size = 6;
	apple.price = 9.8;
	apple.name = 'p';
	apple.is_broken = true;
	apple.info = "k";
	apple.values = { 1,2,3 };
	std::cout << std::endl;
	std::cout << apple.size << '|' << apple.price << '|' << apple.name << '|' << apple.is_broken << '|' << apple.info << '|';
	for (int i = 0;i != apple.values.size();++i)
	{
		std::cout << apple.values[i] << '|';
	}
	std::cout << std::endl;
	HandWatch luch;
	luch.size;
	std::cout << "Size:";
	std::cin >> luch.size;
	luch.price;
	std::cout << "Price:";
	std::cin >> luch.price;
	luch.name;
	std::cout << "Name:";
	std::cin >> luch.name;
	luch.is_broken;
	std::cout << "Broken?:";
	std::cin >> luch.is_broken;
	luch.info;
	std::cout << "Info:";
	std::cin >> luch.info;
	int size;
	std::cout << "Enter your size of values";
	std::cin >> size;
	luch.values;
	for (int i = 0;i != size;++i)
	{
		int temp; 
		std::cin >> temp;
		luch.values.push_back(temp);
		
	}
	for (int i = 0;i != size;++i)
	{
		std::cout << luch.values[i] << '|';
	}
	std::cout << std::endl;
	std::cout << luch.size << '|' << luch.price << '|' << luch.name << '|' << luch.is_broken << '|' << luch.info << '|';
	HandWatch* rolex = &apple;
	rolex->size = 5;
	rolex->price = 7.8;
	rolex->name = 'o';
	rolex->is_broken = true;
	rolex->info = "k";
	rolex->values = { 1,2,3,4 };
	for (int i = 0;i != rolex->values.size();++i)
	{
	
		std::cout << rolex->values[i] << '|';
	}
	std::cout << rolex->size << '|' << rolex->price << '|' << rolex->name << '|' << rolex->is_broken << '|' << rolex->info << '|';
	/*HandWatch& rocket = apple;
	rocket.size;
	rocket.price;
	rocket.name;
	rocket.is_broken;
	rocket.info;
	rocket.values;
	std::cout << std::endl;
	std::cout << rocket.size << '|' << rocket.price << '|' << rocket.name << '|' << rocket.is_broken << '|' << rocket.info << '|';*/*/

}