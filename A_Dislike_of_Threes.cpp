#include <bits/stdc++.h>

using namespace std;

int main()
{

	int t;
	cin >> t;
	while (t--)
	{

		int n;
		cin >> n;
		int count = 0;
		for (int i = 1; i <= 1666; i++)
		{

			if (i % 3 == 0 || (i % 10) == 3)
			{
				continue;
			}

			count++;

			if (count == n)
			{
				cout << i;
				break;
			}
		}
		cout << "\n";
	}
}