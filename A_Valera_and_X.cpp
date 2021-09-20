#include <bits/stdc++.h>
using namespace std;

int main()
{

	int n;
	cin >> n;
	string arr[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	bool diag = true;
	for (int i = 0; i < (n / 2) + 1; i++)
	{
		if (arr[i][i] != arr[i][n - i - 1] || arr[i][i] != arr[0][0])
		{
			diag = false;
			break;
		}
	}
	for (int i = (n / 2) + 1; i < n; i++)
	{
		if (arr[i][i] != arr[i][n - i - 1])
		{
			diag = false;
			break;
		}
	}
	set<char> s;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j || i == (n - j - 1))
			{
				continue;
			}
			else
			{
				s.insert(arr[i][j]);
			}
		}
	}

	if (diag == false || s.size() > 1 || arr[0][1] == arr[0][0])
	{
		cout << "NO";
	}
	else
	{
		cout << "YES";
	}
}