#include <iostream>
#include "prime.h"
int main()
{
	const int i = 2;
	int n;
	std::cin >> n;
	std::cout << prime_number(n, i);

}