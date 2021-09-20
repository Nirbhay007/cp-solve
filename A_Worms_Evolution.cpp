#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> &a, pair<int, int> &b)
{
	return a.first < b.first;
}

int main()
{

	int n;
	cin >> n;

	vector<pair<int, int>> p;
	int data;
	for (int i = 1; i <= n; i++)
	{
		cin >> data;
		p.push_back(make_pair(data, i));
	}

	sort(p.begin(), p.end(), cmp);

	for (int i = 0; i < n - 2; i++)
	{

		for (int k = i + 1; k < n - 1; k++)
		{
			for (int j = i + 2; j < n; j++)
			{
				if (p[i].first + p[k].first == p[j].first)
				{
					cout << p[j].second << " " << p[k].second << " " << p[i].second;
					return 0;
				}
			}
		}
	}
	cout << -1;
}