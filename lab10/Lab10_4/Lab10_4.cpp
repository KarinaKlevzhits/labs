#include <iostream>
void adress_spaces(int size,char* arr)
{
	
	for (int i=0;i!=size;++i)
	{
		if (*(arr+i) ==' ')
		{
			std::cout <<&arr+i<< " ";
		}
	}
}
int main()
{
	char arr[100];
	std::cin.getline(arr, 100);
	adress_spaces(100,arr);
	
}