#include <bits/stdc++.h>

using namespace std;

int main()
{

	string s;
	cin >> s;
	int check = 0;
	bool flag = false;

	for (int i = 1; i < s.length(); i++)
	{
		if (s[i] < 91)
		{
			check++;
		}
	}
	if (check == (s.length() - 1))
	{
		flag = true;
	}

	if (flag)
	{

		if (s[0] > 96)
		{

			s[0] -= 32;
		}
		else
		{
			s[0] += 32;
		}
		for (int i = 1; i < s.length(); i++)
		{
			if (s[i] >= 65 && s[i] <= 90)
			{
				s[i] += 32;
			}
		}
	}
	cout << s;
}