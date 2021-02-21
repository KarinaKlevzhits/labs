#pragma once
void to_matrix(int* first, int* last, int* first2)
{
	for (;first != last;++first)
	{
		*first2=*first;
		std::cout << first2 << " ";
		++first2;
	}
}
