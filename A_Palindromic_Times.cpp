#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(string a)
{

	int low = 0;
	int high = a.length() - 1;
	while (low < high)
	{
		if (a[low] != a[high])
		{
			return false;
		}
		low++;
		high--;
	}
	return true;
}

int main()
{

	string s;
	cin >> s;

	string left = s.substr(0, 2);
	string right = s.substr(3, 5);
	int j = stoi(right) + 1;
	for (int i = stoi(left);; i++)
	{
		if (i == 24)
		{
			i = 0;
		}
		bool flag = false;

		for (;; j++)
		{
			if (j == 60)
			{
				j = 0;
				break;
			}

			string l = to_string(i);
			string r = to_string(j);
			if (l.length() == 1)
			{
				l = '0' + l;
			}
			if (r.length() == 1)
			{
				r = '0' + r;
			}
			string ans = l + r;

			if (isPalindrome(ans))
			{
				flag = true;
				cout << l << ":" << r;
				break;
			}
		}
		if (flag)
		{
			break;
		}
	}
}
