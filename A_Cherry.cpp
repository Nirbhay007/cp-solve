#include <bits/stdc++.h>

using namespace std;

int main()
{

	int t;
	cin >> t;

	while (t--)
	{

		long long ans = INT_MIN;

		int n;
		cin >> n;
		int arr[n + 1];

		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		long long max;
		long long min;
		for (int i = 0; i < n; i++)
		{
			max = arr[i];
			min = arr[i];
			for (int j = i; j < n; j++)
			{

				for (int k = i; k < j; k++)
				{

					if (arr[k] > max)
					{
						max = arr[k];
					}
					if (arr[k] < min)
					{
						min = arr[k];
					}
				}
				if (max * min > ans)
				{
					ans = max * min;
				}
			}

			cout << max * min << endl;
		}
		cout << ans << endl;
	}
}