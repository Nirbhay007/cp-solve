#include <bits/stdc++.h>

using namespace std;

int main()
{

	string s;
	cin >> s;

	int j = s.length() - 1;
	int count[26] = {0};

	for (int i = 0; i <= j; i++)
	{

		count[s[i] - 'a']++;
	}

	int diff = 0;

	for (int i = 0; i < 26; i++)
	{
		if (count[i] % 2 == 1)
		{
			diff += 1;
		}
	}
	if (diff % 2 == 1 || diff == 0)
	{
		cout << "First";
	}
	else
	{
		cout << "Second";
	}
}