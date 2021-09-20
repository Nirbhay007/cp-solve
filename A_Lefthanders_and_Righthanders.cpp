#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<char, int> &a, pair<char, int> &b)
{
	return a.first < b.first;
}

int main()
{

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int n;
	cin >> n;
	string s;
	cin >> s;

	// vector<pair<char, int>> p;

	// for (int i = 0; i < s.length(); i++)
	// {

	// 	p.push_back(make_pair(s[i], i + 1));
	// }

	// sort(p.begin(), p.end(), cmp);

	vector<pair<int, int>> ans;
	// int i = 0;
	// for (auto it = p.begin(); it != p.end(); it++)
	// {
	// 	if (it->first == 'R')
	// 	{
	// 		break;
	// 	}
	// 	else
	// 	{
	// 		i++;
	// 	}
	// }
	// int j = n - i;

	// vector<pair<char, int>>::iterator ab;
	// ab = p.begin();

	// for (auto it = p.begin() + i; it != p.end(); it++)
	// {

	// 	ans.push_back(make_pair(it->second, ab->second));
	// 	ab++;
	// }
	// if (i == j)
	// {
	// 	for (auto i = ans.begin(); i != ans.end(); i++)
	// 	{
	// 		cout << i->first << " " << i->second << "\n";
	// 	}
	// }

	int j = n / 2;

	for (int i = 0; i < n / 2; i++)
	{

		if (s[i] == 'L' && s[j] == 'R')
		{
			cout << i + 1 << " " << j + 1 << "\n";
		}
		else
		{
			cout << j + 1 << " " << i + 1 << "\n";
		}
		j++;
	}
}