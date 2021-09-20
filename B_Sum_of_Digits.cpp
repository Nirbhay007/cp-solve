#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin >> s;

	int count = 0;

	while (s.length() != 1)
	{
		int sum = 0;
		for (int i = 0; i < s.length(); i++)
		{
			int x = s[i] - '0';
			sum += x;
		}

		s = to_string(sum);

		count++;
	}
	cout << count;
}