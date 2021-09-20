#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{

	int t;
	cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n >> m;
		ll max = 10e9 + 1;
		long double arr[n];

		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}

		for (ll i = 1; i < max; i++)
		{

			ll sum = 0;
			for (ll j = 0; j < n; j++)
			{

				if (sum > m)
				{
					break;
				}
				sum += ceil(arr[j] / i);
			}

			if (sum <= m)
			{

				cout << i;
				break;
			}
			else if (sum > 2 * m)
			{
				i *= 2;
			}
		}
		cout << "\n";
	}
}