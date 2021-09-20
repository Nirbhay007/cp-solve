#include <bits/stdc++.h>
using namespace std;

bool sorting(pair<string, int> a, pair<string, int> b)
{
	return a.second > b.second;
}

bool sorting2(pair<string, int> a, pair<string, int> b)
{
	return a.first < b.first;
}
int main()
{

	int n;
	cin >> n;

	string s;
	int k;
	int arr[101];

	vector<pair<string, int>> v;
	for (int i = 0; i < n; i++)
	{
		cin >> s >> k;

		v.push_back(make_pair(s, k));
		arr[k] = i + 1;
	}

	sort(v.begin(), v.end(), sorting);

	sort(v.begin(), v.end(), sorting2);

	for (auto it = v.begin(); it != v.end(); it++)
	{

		cout << arr[it->second] << "\n";
	}
}