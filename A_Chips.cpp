#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, chips;
	cin >> n >> chips;

	int count = 0;
	while (chips)
	{
		for (int i = 1; i <= n; i++)
		{

			if (chips == 0)
			{
				break;
			}
			if (chips < i)
			{
				count = chips;
				break;
			}

			chips -= i;
		}
		if (count)
		{
			break;
		}
	}
	cout << count;
}