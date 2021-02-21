#pragma once
bool prime_number(int n, const int i)
{
	
	if (n % i == 0)
	{
		return false;
	}
	else if (i <= sqrt(n))
	{
		return prime_number(n, i + 1);
	}
	else
		return true;
}

}