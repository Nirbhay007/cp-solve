#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<char, int> &a, pair<char, int> &b)
{
	return a.second < b.second;
}

int main()
{

	string a, b, c, d;

	cin >> a >> b >> c >> d;
	a = a.substr(2);
	b = b.substr(2);
	c = c.substr(2);
	d = d.substr(2);

	map<char, int> m{
	    {'A', a.length()},
	    {'B', b.length()},
	    {'C', c.length()},

	    {'D', d.length()}};
	int mi = INT_MAX;
	char mi_index;

	int ma = 0;
	char ma_index;
	for (auto &x : m)
	{
		if (x.second < mi)
		{
			mi = x.second;
			mi_index = x.first;
		}
		if (x.second > ma)
		{
			ma = x.second;
			ma_index = x.first;
		}
	}

	bool min_flag = true;

	for (auto &x : m)
	{

		if (x.first == mi_index)
		{
			continue;
		}
		if (x.second < 2 * mi)
		{
			min_flag = false;
		}
	}
	bool max_flag = true;

	for (auto &x : m)
	{
		if (x.first == ma_index)
		{
			continue;
		}
		if (x.second * 2 > ma)
		{
			max_flag = false;
		}
	}

	if (max_flag)
	{
		cout << ma_index;
	}
	else if (min_flag)
	{
		cout << mi_index;
	}
	else
	{
		cout << 'C';
	}
}