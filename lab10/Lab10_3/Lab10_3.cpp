#include <iostream>
#include <ctime>
void fill_array(char* first, char* last)
{
	srand(time(0));
	for (;first != last;++first)
	{
		*first = 65 + rand() % (90-65+1);
		std::cout << *first << " ";
	}
	
}
int search_w(char* first, char* last)
{
	int count = 0;
	for (;first != last;++first)
	{
		if (*first == 'W')
		{
			++count;
		}
	}
	return count;
}
int main()
{
	char arr[280];
	fill_array(arr, arr + 280);
	std::cout << std::endl;
	std::cout << search_w(arr, arr + 280);
}