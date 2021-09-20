#include <bits/stdc++.h>

using namespace std;

int main()
{

	string s;
	cin >> s;

	int max_even = -1;
	int index;
	int n = s.length() - 1;
	for (int i = 0; i < s.length(); i++)
	{
		int integer_val = s[i] - '0';
		int flag = false;
		if (integer_val % 2 == 0)
		{

			if (integer_val < (s[n] - '0'))
			{
				max_even = integer_val;
				index = i;
				flag = true;
				break;
			}
			else if (integer_val >= (s[n] - '0'))
			{
				max_even = integer_val;
				index = i;
			}
		}
		if (flag)
		{
			break;
		}
	}
	if (max_even == -1)
	{
		cout << -1;
	}
	else
	{
		swap(s[n], s[index]);
		cout << s;
	}
}