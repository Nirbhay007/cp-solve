#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{

	ll l, r;

	cin >> l >> r;

	if ((r - l) > 1)
	{
		int range = r - l + 1;
		bool flag = false;
		ll start, mid, end;

		if (l % 2 == 0)
		{
			start = l;
			mid = l + 1;
			end = l + 2;
		}
		else if (range > 3)
		{
			start = l + 1;
			mid = l + 2;
			end = l + 3;
		}
		else
		{
			cout << -1;
			return 0;
		}

		cout << start << " " << mid << " " << end;
	}
	else
	{
		cout << -1;
	}
}
