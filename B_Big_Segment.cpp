#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{

	ll n;
	cin >> n;
	ll max = INT_MIN;
	ll min = INT_MAX;
	vector<pair<int, int>> p;
	ll data1, data2;

	ll ans;

	for (int i = 0; i < n; i++)
	{
		cin >> data1 >> data2;
		p.push_back(make_pair(data1, data2));
		if (data1 <= min && data2 >= max)
		{
			min = data1;
			max = data2;
			ans = i + 1;
		}
	}

	for (auto it = p.begin(); it != p.end(); it++)
	{

		if (it->first < min || it->second > max)
		{
			cout << -1;
			return 0;
		}
	}
	cout << ans;
}