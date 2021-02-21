#pragma once
struct HandWatch
{
	int size;
	double price;
	char name;
	bool is_broken;
	std::string info;
	std::vector<int> values;
	void fill_values(HandWatch apple)
	{
		for (int i = 0;i != values.size();++i)
		{
			apple.values[i] = i;
			std::cout << apple.values[i] << '|';
		}
	}
};