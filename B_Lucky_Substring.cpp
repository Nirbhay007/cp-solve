#include <bits/stdc++.h>

using namespace std;

int main()
{

	string s;
	cin >> s;

	int no4 = 0, no7 = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '4')
		{
			no4 += 1;
		}
		else if (s[i] == '7')
		{
			no7 += 1;
		}
	}
	if (no4 == 0 && no7 == 0)
	{
		cout << -1;
	}
	else if (no4 >= no7)
	{
		cout << 4;
	}
	else
	{
		cout << 7;
	}
}