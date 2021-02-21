#include <iostream>
#include <cmath>
#include "fill.h"
#include "more_than_t.h"
int main()
{
	int t;
	std::cout << "Eneter number t:";
	std::cin >> t;
	int m;
	std::cout << "Eneter value of array A:";
	std::cin >> m;
	int n;
	std::cout << "Eneter value of array B:";
	std::cin >> n;
	int* a = new int[m];
	int* b = new int[n];
	feelA(a, m);
	feelB(b, n);
	counter_b_and_a(a, b, t, m, n,0,0);
	value_elements_more_than_t(a, b, t,m,n,0,0);
	delete[]a;
	delete[]b;
}