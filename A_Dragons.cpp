#include <bits/stdc++.h>

using namespace std;

int main()
{

	int kirtos_initial_strength, n;
	cin >> kirtos_initial_strength >> n;

	int drangons_strength, bonus;

	vector<pair<int, int>> v;

	for (int i = 0; i < n; i++)
	{
		cin >> drangons_strength >> bonus;
		v.push_back(make_pair(drangons_strength, bonus));
	}
	bool flag = false;
	sort(v.begin(), v.end());
	for (int i = 0; i < n; i++)
	{
		if (kirtos_initial_strength <= v[i].first)
		{
			flag = true;
			break;
		}
		else
		{
			kirtos_initial_strength += v[i].second;
		}
		if (flag)
		{
			break;
		}
	}

	if (flag)
	{
		cout << "NO";
	}
	else
	{
		cout << "YES";
	}
}
