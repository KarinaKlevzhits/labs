#include <iostream>
#include <string>
int size_of_string(const char* s)
{
	int count = 0;
	for (;*s != 0;++s)
	{
		++count;
	}
	return count;
}
//bool find_substr(char* s, char* c)
//{
//	int count = 0;
//	int size1 = sizze_of_string(s);
//	int size2 = sizze_of_string(c);
//	for (int i = 0;i != size1; ++ i)
//	{
//		for (int j = 0;j != size2;++j)
//		{
//			if (s[i] == c[j])
//			{
//				++count;
//			}
//		}
//	}
//	std::cout << count;
//	if (count == size2)
//	{
//		return true;
//	}
//	return false;
//}
bool find_substr(const char* s1, const char* s2)
{
	char* i = (char*)s1;
	for (;*i != 0;++i)
	{
		
		for (char* k = i, *j = (char*)s2;*k != 0 && *j != 0;++k, ++j)
		{
			if (*k != *j)
			{
				++i;
				break;
			}
			if (*(j + 1) == 0)
			{
				return true;
			}

		}
		
	}
	return false;
	

}
int main()
{
    const char* string= "hello";
	const char* substring="ll";
	std::cout << find_substr(string, substring);
	/*std::cout << "Enter your str";
	char* s;
	std::cin.getline(s,sizze_of_string(s));
	std::cout << "Enter your substr";
	char* c;
	std::cin.getline(c, sizze_of_string(c));
	std::cout << find_substr(s,c);*/
}