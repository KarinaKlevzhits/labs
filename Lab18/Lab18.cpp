#include <iostream>
#include <string>
struct Map
{
    int way;
	std::string last_place;
	void sort_bubble_increase(Map* arr, int size);
};
void Map::sort_bubble_increase(Map* arr, int size)
{

	for (int i = 0;i != size-1;++i)
	{
		for (int j = 0;j != size-i-1;++j)
		{
			
			if (arr->last_place[j] > arr->last_place[j + 1])
			{
			
				int temp = arr->last_place[j];
				arr->last_place[j] = arr->last_place[j + 1];
				arr->last_place[j + 1] = temp;
			}
		}
	}
	for (int i = 0;i != size - 1;++i)
	{
		std::cout << arr->last_place[i] << ';';
	}
}
int main()
{
	
	int n;
	std::cout << "Enter n:";
	std::cin >> n;
	Map* minsk_moscow = new Map[n];
	for (int i = 0;i != n;++i)
	{
		std::cout << "Enter way:";
		std::cin >> minsk_moscow[i].way;
		
	}
	for (int i = 0;i != n;++i)
	{
		std::cout << "Enter name of last place:";
		std::cin >> minsk_moscow[i].last_place;
		std::cout << minsk_moscow[i].last_place;
	}
	minsk_moscow[n].sort_bubble_increase(minsk_moscow, n);

}
