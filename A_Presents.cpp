#include <bits/stdc++.h>

using namespace std;

bool sort_by_sec(const pair<int, int> &a, const pair<int, int> &b)
{

	return (a.second < b.second);
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
		p.push_back(make_pair(i, data));
	}

	sort(p.begin(), p.end(), sort_by_sec);
	for (auto it = p.begin(); it != p.end(); it++)
	{
		cout << it->first << " ";
	}
}