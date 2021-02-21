#pragma once
struct HandWatch
{
	int size;
	double price;
	char name;
	bool is_broken;
	std::string info;
	int values[10];

	HandWatch(int s, double p, char n, bool b)
	{
		size = s;
		price = p;
		name = n;
		is_broken = b;
	}
	HandWatch() = default;
	int counter_x(HandWatch* luch, int x, int size);
};
int HandWatch::counter_x(HandWatch* luch, int x, int size)
{
	int count = 0;
	for (int i = 0;i != size;++i)
	{
		if (luch[i].size != x)
		{
			++count;
		}
	}
	return count;
}
struct NOTE
{
	std::string name;
	long long int number;
	int date[3];
	void number_vs_number(NOTE* noter, long long int number2, const int k);
};
void NOTE::number_vs_number(NOTE* noter, long long int number2, const int k)
{
	long long int number0 = number2;
	for (int i = 0;i != k;++i)
	{

		if (number2 == noter[i].number)
		{
			std::cout << noter[i].name << ';' << noter[i].number << ';' << noter[i].date[i];
			number2 = 0;
		}

	}
	if (number2 == number0)
	{
		std::cout << "Don't have";
	}


}
