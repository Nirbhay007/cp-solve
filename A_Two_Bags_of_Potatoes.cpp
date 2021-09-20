#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
	ll y, k, n;

	cin >> y >> k >> n;

	if (y >= n)
	{
		cout << -1;
	}
	else if (k == n)
	{
		cout << n - y;
	}

	else
	{
		vector<int> v;
		for (int i = (k - (y % k)); i <= n - y; i++)
		{
			if ((y + i) % k == 0)
			{
				v.push_back(i);
				i += (k - 1);
			}
		}
		if (v.size() == 0)
		{
			cout << -1;
		}
		else
		{
			for (auto x : v)
			{
				cout << x << " ";
			}
		}
	}
}