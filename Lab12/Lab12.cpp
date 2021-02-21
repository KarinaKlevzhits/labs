#include<iostream>
#include <cmath>
#include "Task1.h"
#include "Task2.h"
#include "Task3.h"
#include "Task4.h"
#include "Task5.h"
int main()
{
	int m;
	std::cout << "Enter value of rows:";
	std::cin >> m;
	int n;
	std::cout << "Enter value of columns:";
	std::cin >> n;
	int** arr = new int*[m];
	check_the_place(arr);
	check_the_place(arr);
	create_column(arr, m, n);
	fill_array(arr, m, n);
	print_array(arr, m, n);
	////std::cout<<sum_sqrt(arr, m, n);
	////std::cout<<mull_elements(arr, m, n);
	////search_min(arr, m, n);
	std::cout<<value_less_than_arif(arr, m, n);
	
}