#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	cin >> n;
	int sum = 0;
	int data;

	int odd = 0, even = 0;

	while (n--)
	{
		cin >> data;
		sum += data;
		if (data % 2 == 0)
		{
			even += 1;
		}
		else
		{
			odd += 1;
		}
	}

	if (n == 1 && sum % 2 == 0)
	{
		cout << 0;
	}
	else
	{
		if (sum % 2 == 0)
		{
			cout << even;
		}
		else
		{
			cout << odd;
		}
	}
}