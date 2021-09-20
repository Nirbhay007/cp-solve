#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
	int upper = 0, lower = 0, u, l, n, c = 0;
	cin >> n;

	while (n--)
	{
		cin >> u >> l;
		upper += u;
		lower += l;

		c += (u % 2) != (l % 2);
	}

	if (upper % 2 == 0 && lower % 2 == 0)
	{
		cout << 0;
	}
	else if (c % 2 == 0 && c > 0)
	{
		cout << 1;
	}
	else
	{
		cout << -1;
	}
}