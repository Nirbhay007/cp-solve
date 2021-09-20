#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	cin >> n;
	int price, qual;

	int happy_count = 0, poor_count = 0;
	while (n--)
	{

		cin >> price >> qual;
		if (price == qual)
		{

			poor_count += 1;
		}
		else
		{
			happy_count += 1;
		}
	}
	if (happy_count)
	{
		cout << "Happy Alex";
	}
	else
	{
		cout << "Poor Alex";
	}
}