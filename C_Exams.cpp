#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	cin >> n;

	int day, given;

	vector<pair<int, int>> p;
	while (n--)
	{

		cin >> day >> given;
		p.push_back(make_pair(day, given));
	}
	int ans = -1;
	sort(p.begin(), p.end());

	for (auto it = p.begin(); it != p.end(); it++)
	{

		if (ans <= it->second)
		{
			ans = it->second;
		}
		else
		{
			ans = it->first;
		}
	}
	cout << ans;
}