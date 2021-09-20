#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	cin >> n;

	int arr[n + 1];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int count = 2;

	if (n == 1)
	{
		cout << 1;
	}
	else
	{

		int m = 0;
		for (int i = 2; i < n; i++)
		{
			if (arr[i] == (arr[i - 1] + arr[i - 2]))
			{
				count += 1;
			}
			else
			{

				m = max(m, count);
				count = 2;
			}
		}
		cout << max(m, count);
	}
}