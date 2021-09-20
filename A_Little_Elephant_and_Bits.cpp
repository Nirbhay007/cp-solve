#include <bits/stdc++.h>

using namespace std;

int main()
{

	string s;
	cin >> s;
	bool flag = true;

	for (int i = 0; i < s.length() - 1; i++)
	{
		if (s[i] == '0')
		{
			flag = false;
			s.erase(s.begin() + i);
			break;
		}
	}

	if (flag)
	{

		for (int i = 0; i < s.length() - 1; i++)
		{
			cout << s[i];
		}
	}
	else
	{
		for (int i = 0; i < s.length(); i++)
		{
			cout << s[i];
		}
	}
}