#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, m;
	cin >> n >> m;

	char arr[n][m];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}

	char pattern[n][m];

	for (int i = 0; i < n; i++)
	{

		if (i % 2 == 0)
		{
			for (int j = 0; j < m; j++)
			{

				if (arr[i][j] == '-')
				{
					pattern[i][j] = '-';
					continue;
				}

				else if (j % 2 == 0)
				{

					pattern[i][j] = 'B';
				}

				else
				{

					pattern[i][j] = 'W';
				}
			}
		}
		else
		{

			for (int j = 0; j < m; j++)
			{

				if (arr[i][j] == '-')
				{
					pattern[i][j] = '-';
					continue;
				}
				if (j % 2 == 0)
				{

					pattern[i][j] = 'W';
				}
				else
				{
					pattern[i][j] = 'B';
				}
			}
		}
	}
	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < m; i++)
		{
			cout << pattern[j][i];
		}
		cout << endl;
	}
}