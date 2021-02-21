#pragma once
template <class Dynamic>
void feelA(Dynamic a, int m)
{
	for (int i = 0; i < m; ++i)
	{
		a[i] = i;
		std::cout << a[i] << " ";
	}
}
template <class Dynamic>
void feelB(Dynamic b, int n)
{
	for (int i = 0; i < n; ++i)
	{
		b[i] = i;
	}
}
