#include <bits/stdc++.h>

using namespace std;

int main()
{

	int t;
	cin >> t;
	while (t--)
	{

		long long n;
		cin >> n;
		string s;
		cin >> s;

		int count_zero = 0;
		int other = 0;
		int sum = 0;

		for (int i = 0; i < n; i++)
		{
			int num = s[i] - '0';
			sum += num;

			if (s[i] != '0' && i != n - 1)
			{
				sum++;
			}
		}
		cout << sum << "\n";
	}
}