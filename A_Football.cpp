#include <bits/stdc++.h>

using namespace std;

int main()
{

	string s;
	cin >> s;

	int count = 0;
	bool flag = false;

	for (int i = 0; i < s.length(); i++)
	{

		if (s.length() > 7)
		{

			if (s[i] == '1' && s[i + 1] == '1' && s[i + 2] == '1' && s[i + 3] == '1' && s[i + 4] == '1' && s[i + 5] == '1' && s[i + 6] == '1')
			{
				flag = true;
				break;
			}

			else if (s[i] == '0' && s[i + 1] == '0' && s[i + 2] == '0' && s[i + 3] == '0' && s[i + 4] == '0' && s[i + 5] == '0' && s[i + 6] == '0')
			{
				flag = true;
				break;
			}
		}
		else
		{
			break;
		}
		if (flag)
		{
			break;
		}
	}
	if (flag)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}