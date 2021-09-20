#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int a1 = 0;
	int a2 = 0;
	int a3 = 0;
	int a4 = 0;
	int data;
	while (n--)
	{
		cin >> data;
		if (data == 1)
		{
			a1 += 1;
		}
		else if (data == 2)
		{
			a2 += 1;
		}
		else if (data == 3)
		{
			a3 += 1;
		}
		else
		{
			a4 += 1;
		}
	}

	int count = 0;
	count = a4;
	if (a3 > a1)
	{
		count += a1;
		a3 -= a1;
		a1 = 0;
	}
	else if (a1 >= a3)
	{
		count += a3;
		a1 -= a3;
		a3 = 0;
	}
	if (a3 > 0)
	{
		count += a3;
	}

	count += (a2 / 2);

	if (a2 % 2 == 1)
	{
		count += 1;
		a1 -= 2;
	}

	if (a1 > 0)
	{
		count += (a1 + 3) / 4;
	}

	cout << count;
}