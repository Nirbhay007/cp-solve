#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, t;
	cin >> n >> t;

	// int arr[51];
	string s;
	cin >> s;

	while (t--)
	{
		for (int i = 0; i < s.length() - 1;)
		{
			if (s[i] == 'B' && s[i + 1] == 'G')
			{
				swap(s[i], s[i + 1]);
				i += 2;
			}
			else
			{
				i++;
			}
		}
	}
	cout << s;
}