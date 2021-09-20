#include <bits/stdc++.h>

using namespace std;

int main()
{

	long long price_of_one, money, no_of_ban;

	cin >> price_of_one >> money >> no_of_ban;

	long long borrow = 0;

	for (int i = 1; i <= no_of_ban; i++)
	{

		borrow += (i * price_of_one);
	}

	if (borrow <= money)
	{
		cout << 0;
	}
	else
	{
		cout << borrow - money;
	}
}