#include <bits/stdc++.h>
using namespace std;

int main()
{

	string s;
	cin >> s;
	string res;
	if (s[0] >= 65 && s[0] <= 90)
	{
		res += char(s[0] + 32);
	}
	else
	{
		res += s[0];
	}
	for (int i = 1; i < s.length(); i++)
	{

		if (s[i] >= 65 && s[i] <= 90)
		{
			res += " ";
			res += char(s[i] + 32);
		}
		else
		{
			res += (s[i]);
		}
	}
	cout << res;
}