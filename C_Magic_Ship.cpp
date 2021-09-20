#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{

	ll x1, y1;
	cin >> x1 >> y1;
	ll x2, y2;
	cin >> x2 >> y2;

	ll n;
	cin >> n;
	string s;
	cin >> s;

	ll x = 0, y = 0;
	vector<pair<int, int>> p;
	for (int i = 0; i < n; i++)
	{
		if (s[i] == 'U')
		{
			y += 1;
		}
		else if (s[i] == 'D')
		{
			y -= 1;
		}
		else if (s[i] == 'R')
		{
			x += 1;
		}
		else if (s[i] == 'L')
		{
			x -= 1;
		}
		p.push_back(make_pair(x, y));
	}

	ll l = 0;
	ll r = 1e15;

	ll mid;

	ll ans = -1;

	while (l <= r)
	{
		mid = (l + r) / 2;

		ll q = mid / n;
		ll rem = mid % n;

		ll xoffset = abs(x2 - (x1 + q * x + p[rem].first));
		ll yoffset = abs(y2 - (y1 + q * y + p[rem].second));

		if ((xoffset + yoffset) <= mid)
		{
			ans = mid;

			r = mid - 1;
		}
		else
		{
			l = mid + 1;
		}
	}
	cout << ans;
}