#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, c;
	cin >> n >> c;
	int arr[n + 1];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int max_diff = INT_MIN;

	for (int i = 0; i < n - 1; i++)
	{
		if (arr[i] - arr[i + 1] > max_diff)
		{
			max_diff = max(max_diff, arr[i] - arr[i + 1]);
		}
	}

	if (max_diff - c <= 0)
	{
		cout << 0;
	}
	else
	{
		cout << max_diff - c;
	}
}