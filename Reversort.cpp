#include <bits/stdc++.h>

using namespace std;

int main()
{

	int t;
	cin >> t;
	for (int k = 1; k <= t; k++)
	{
		int n;
		cin >> n;

		int arr[n + 1];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}

		int pos = 0;
		int total_cost = 0;
		for (int i = 0; i < n - 1; i++)
		{
			int min = arr[i];
			pos = i;
			for (int j = i; j < n; j++)
			{

				if (arr[j] < min)
				{
					min = arr[j];
					pos = j;
				}
			}
			if (pos != i)
			{

				total_cost += (pos - i + 1);

				reverse(arr + i, arr + pos + 1);
			}
			else
			{
				total_cost += 1;
			}
		}

		cout << "Case "
		     << "#" << k << ": " << total_cost << endl;
	}
}