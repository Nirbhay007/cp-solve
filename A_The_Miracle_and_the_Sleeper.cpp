#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{

	int t;
	cin >> t;
	while (t--)
	{

		ll l, r;
		cin >> l >> r;
		int ans1 = r % l, ans2;

		if ((r + 1) / 2 < l)
		{
			ans2 = 0;
		}
		else
		{
			if (r % 2 == 0)
			{
				ans2 = (r / 2) - 1;
			}
			else
			{
				ans2 = (r + 1) / 2 - 1;
			}
		}
		cout << max(ans1, ans2) << "\n";
	}
}