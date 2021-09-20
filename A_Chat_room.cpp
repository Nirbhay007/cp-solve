#include <bits/stdc++.h>

using namespace std;

int main()
{

	string s;
	cin >> s;

	string ans = "hello";

	int a = 0, len = 0;
	string final = "NO";

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == ans[a])
		{
			a++;
			len++;
		}
		if (len == 5)
		{
			final = "YES";
			break;
		}
	}
	cout << final;
}