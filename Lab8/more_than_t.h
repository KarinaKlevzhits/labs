#pragma once
template <class Dynamic>
void value_elements_more_than_t(Dynamic a, Dynamic b, int t, int m, int n, int count_a, int count_b)
{
	if (count_a > count_b)
	{
		for (int i = 0;i != n;++i)
		{
			std::cout << b[i] << " ";
		}
	}
	else
	{
		for (int i = 0;i != m;++i)
		{
			std::cout << a[i] << " ";
		}
	}
}
template <class Dynamic>
void counter_b_and_a(Dynamic a, Dynamic b, int t, int m, int n, int count_a, int count_b)
{
	for (int j = 0;j != n;++j)
	{
		if (b[j] > t && a[j] > t)
		{
			++count_b;
			++count_a;
		}
	}

}
