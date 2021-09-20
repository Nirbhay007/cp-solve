#include <bits/stdc++.h>
using namespace std;

int main()
{

	int n, g;

	cin >> n >> g;

	string arr[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	vector<bool> succesful(n, false);
	for (int i = 0; i < g; i++)
	{
		int maximum = '0';
		for (int j = 0; j < n; j++)
		{

			if (arr[j][i] > maximum)
			{
				maximum = arr[j][i];
			}
		}
		for (int j = 0; j < n; j++)
		{

			if (arr[j][i] == maximum)
			{
				succesful[j] = true;
			}
		}
	}
	cout << count(succesful.begin(), succesful.end(), true);
}