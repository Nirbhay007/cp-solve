#include <bits/stdc++.h>

using namespace std;

int main()
{

	string s;
	cin >> s;

	int k;
	cin >> k;

	int count = s.length();

	int i = 0;
	while (s[i] == '0')
	{
		count--;
		i++;
	}
	if (count == k)
	{
		cout << "True " << k;
	}
	else
	{

		cout << "False " << count;
	}
}