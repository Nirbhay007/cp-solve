#include <bits/stdc++.h>
using namespace std;

int main()
{

	string s;
	cin >> s;
	string ans;
	int n = s.length();
	if (n == 1)
	{
		cout << s;
		return 0;
	}
	ans += s[0];
	ans += s[1];

	int l = 2;

	for (int i = 2; i < n; i++)
	{
		if (ans[l - 1] == ans[l - 2] && s[i] == ans[l - 1])
		{
			continue;
		}
		else if (ans[l - 1] == ans[l - 2] && s[i] != ans[l - 1])
		{
			ans += s[i];
			l++;
		}
		else if (ans[l - 2] == ans[l - 3] && s[i] == ans[l - 1])
		{
			continue;
		}
		else
		{
			ans += s[i];
			l++;
		}
	}
	cout << ans;
}