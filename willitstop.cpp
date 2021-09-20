#include <bits/stdc++.h>
using namespace std;

///program to check whether the number is power of two or not

bool power(int n)
{

	if (n == 1)
	{
		return true;
	}

	if (n % 2 == 0)
	{
		while (n % 2 == 0)
		{
			n /= 2;
		}

		if (n == 1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}

int main()
{

	cout << power(1024);
}