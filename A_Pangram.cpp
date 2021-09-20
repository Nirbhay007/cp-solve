#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	cin >> n;
	string s;

	cin >> s;

	int arr[26] = {0};

	for (int i = 0; i < n; i++)
	{

		if (s[i] > 96)
		{
			arr[s[i] - 'a']++;
		}
		else
		{
			arr[s[i] - 'A']++;
		}
	}

	for (int i = 0; i < 26; i++)
	{

		if (arr[i] == 0)
		{
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
}