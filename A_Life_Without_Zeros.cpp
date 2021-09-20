#include <bits/stdc++.h>
using namespace std;

int main()
{

	string s1, s2;

	cin >> s1 >> s2;

	string ans = to_string(stoi(s1) + stoi(s2));

	string wzs1;
	string wzs2;
	string res;
	for (int i = 0; i < s1.length(); i++)
	{
		if (s1[i] != '0')
		{
			wzs1 += s1[i];
		}
	}

	for (int i = 0; i < s2.length(); i++)
	{
		if (s2[i] != '0')
		{
			wzs2 += s2[i];
		}
	}
	for (int i = 0; i < ans.length(); i++)
	{
		if (ans[i] != '0')
		{
			res += ans[i];
		}
	}
	string res2 = to_string(stoi(wzs1) + stoi(wzs2));

	if (res == res2)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}