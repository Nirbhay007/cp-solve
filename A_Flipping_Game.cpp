#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	cin >> n;
	int ones = 0;

	int arr[n + 1];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (arr[i] == 1)
		{
			ones += 1;
		}
	}
	int sum = 0;

	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == 0)
		{
			sum += 1;
		}
		else
		{
			sum -= 1;
		}
		ans = max(sum, ans);
		if (sum < 0)
		{
			sum = 0;
		}
	}

	if (ones == n)
	{
		cout << n - 1;
	}
	else
	{
		cout << ones + ans;
	}
}