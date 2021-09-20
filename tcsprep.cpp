#include <bits/stdc++.h>

using namespace std;

int count_fact(int n)
{

	if (n < 2)
	{
		return 1;
	}
	int fact = 1;
	for (int i = 2; i <= n; i++)
	{
		fact *= i;
	}

	return fact;
}

int main()
{
	int n;
	cin >> n;
	int count = 0;
	int a = n;
	while (a)
	{
		int rem = a % 10;
		count += (count_fact(rem));
		a /= 10;
	}

	if (count == n)
	{
		cout << "YES";
	}
	else
	{
		cout << "no";
	}
}