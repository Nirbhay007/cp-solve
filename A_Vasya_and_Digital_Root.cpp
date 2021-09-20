#include <bits/stdc++.h>

using namespace std;

int main()
{

	int k, d;
	cin >> k >> d;

	if (d == 0 && k == 1)
	{
		cout << 0;
		return 0;
	}
	else if (d == 0 && k > 1)
	{
		cout << "No solution";
	}

	else
	{

		if (d <= k)
		{
			for (int i = 0; i < d; i++)
			{
				cout << 1 << "";
			}
			for (int j = 0; j < (k - d); j++)
			{
				cout << 0 << "";
			}
		}
		else
		{
			for (int i = 0; i < k - 1; i++)
			{
				cout << 1 << "";
			}
			int rem = d - (k - 1);
			cout << rem;
		}
	}
}