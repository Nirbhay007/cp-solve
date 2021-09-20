#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, m;
	cin >> n >> m;

	int arr[n][m];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}

	bool check = false;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{

			if (arr[0][j] == 1)
			{
				check = true;
			}
			else if (arr[i][0] == 1)
			{
				check = true;
			}
			else if (arr[n - 1][j] == 1)
			{
				check = true;
			}
			else if (arr[i][m - 1])
			{
				check = true;
			}
		}
	}
	if (check)
	{

		cout << 2;
	}
	else
	{
		cout << 4;
	}
}