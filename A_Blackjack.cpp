#include <bits/stdc++.h>
using namespace std;

int main()
{

	int n;
	cin >> n;

	map<int, int> m;

	for (int i = 1; i < 12; i++)
	{
		m[i] = 4;
	}

	m[10] = 15;
	int want = n - 10;
	if (want == 0)
	{
		cout << 0;
	}
	else
	{
		int count = 0;
		for (auto it = m.begin(); it != m.end(); it++)
		{
			if (want == it->first)
			{
				count += it->second;
			}
		}
		cout << count;
	}
}