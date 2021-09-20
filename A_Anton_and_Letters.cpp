#include <bits/stdc++.h>

using namespace std;

int main()
{

	string s;

	getline(cin, s);

	set<char> c;

	for (int i = 0; i < s.length(); i++)
	{

		if (s[i] >= 97 && s[i] <= 122)
		{
			c.insert(s[i]);
		}
	}
	cout << c.size();
}